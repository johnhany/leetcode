# VECTOR

## emplace_back vs push_back

[http://c.biancheng.net/view/6826.html](http://c.biancheng.net/view/6826.html)

[https://stackoverflow.com/questions/20391632/how-to-use-stdvectoremplace-back-for-vectorvectorint](https://stackoverflow.com/questions/20391632/how-to-use-stdvectoremplace-back-for-vectorvectorint)

```
vector<vector<int>> res;
res.emplace_back(std::initializer_list<int>{1,2});
```

## move deque to vector

```
deque<string> from;
vector<string> to;

while (!from.empty()) {
    to.emplace_back(std::move(from.front()));
    from.pop_front();
}
```

## move list to vector

```
list<int> from;
vector<int> to(std::make_move_iterator(from.begin()), std::make_move_iterator(from.end()));
```

## remove duplicates in vector

[https://stackoverflow.com/questions/1041620/whats-the-most-efficient-way-to-erase-duplicates-and-sort-a-vector](https://stackoverflow.com/questions/1041620/whats-the-most-efficient-way-to-erase-duplicates-and-sort-a-vector)

```
sort(vec.begin(), vec.end());
vec.erase(unique(vec.begin(), vec.end()), vec.end());
```

convert to `set` and convert back to `vector` is faster if there are too many duplicates

# LIST

## concat list

```
list<int> rst;
list<int> tmp;
rst.splice(rst.end(), tmp);
```

# MAP

## map vs unordered_map

[https://zhuanlan.zhihu.com/p/48066839](https://zhuanlan.zhihu.com/p/48066839)

map是基于红黑树实现。红黑树作为一种自平衡二叉树，保障了良好的最坏情况运行时间，即它可以做到在O(log n)时间内完成查找，插入和删除，在对单次时间敏感的场景下比较建议使用map做为容器。比如实时应用，可以保证最坏情况的运行时间也在预期之内。

另红黑树是一种二叉查找树，二叉查找树一个重要的性质是有序，且中序遍历时取出的元素是有序的。对于一些需要用到有序性的应用场景，应使用map。

unordered_map是基于hash_table实现，一般是由一个大vector，vector元素节点可挂接链表来解决冲突来实现。hash_table最大的优点，就是把数据的存储和查找消耗的时间大大降低，几乎可以看成是常数时间；而代价仅仅是消耗比较多的内存。


[https://stackoverflow.com/questions/36392583/is-an-unordered-map-really-faster-than-a-map-in-practice](https://stackoverflow.com/questions/36392583/is-an-unordered-map-really-faster-than-a-map-in-practice)

the unordered_map shows its superiority as soon as there is data in the map. The only time it exhibits worse performance than the ordered map is when the maps are empty.

## insert or update map

[https://stackoverflow.com/questions/97050/stdmap-insert-or-stdmap-find](https://stackoverflow.com/questions/97050/stdmap-insert-or-stdmap-find)

```
typedef map<int, int> MapType;    // Your map type may vary, just change the typedef

MapType mymap;
// Add elements to map here
int k = 4;   // assume we're searching for keys equal to 4
int v = 0;   // assume we want the value 0 associated with the key of 4

MapType::iterator lb = mymap.lower_bound(k);

if(lb != mymap.end() && !(mymap.key_comp()(k, lb->first)))
{
    // key already exists
    // update lb->second if you care to
}
else
{
    // the key does not exist in the map
    // add it to the map
    mymap.insert(lb, MapType::value_type(k, v));    // Use lb as a hint to insert,
                                                    // so it can avoid another lookup
}
```

`lower_bound`: iterator pointing to first element equal to or greater than key, or end()

[https://stackoverflow.com/questions/21463928/insert-or-update-a-map](https://stackoverflow.com/questions/21463928/insert-or-update-a-map)

```
map[key] = value;
```

however it requires that value be default constructible and assignable. Furthermore, since those operations take place they might (in some case) lead to performance concerns.

```
map.insert_or_assign(key, value);
```

It will work even for key and value types that are not default constructible or not copyable.

# COMMON

## empty() vs size()

[https://stackoverflow.com/questions/743197/size-vs-empty-in-vector-why-empty-is-preferred](https://stackoverflow.com/questions/743197/size-vs-empty-in-vector-why-empty-is-preferred)

empty() has O(1) implementations for ALL container classes.

size() can only provide O(n) implementations for some containers

## iterator invalidation rule

[https://stackoverflow.com/questions/6438086/iterator-invalidation-rules-for-c-containers](https://stackoverflow.com/questions/6438086/iterator-invalidation-rules-for-c-containers)

**Insertion**

Sequence Containers

* `vector`: The functions insert, emplace_back, emplace, push_back cause reallocation if the new size is greater than the old capacity. Reallocation invalidates all the references, pointers, and iterators referring to the elements in the sequence. If no reallocation happens, all the iterators and references before the insertion point remain valid. [26.3.11.5/1]
With respect to the reserve function, reallocation invalidates all the references, pointers, and iterators referring to the elements in the sequence. No reallocation shall take place during insertions that happen after a call to reserve() until the time when an insertion would make the size of the vector greater than the value of capacity(). [26.3.11.3/6]

* `deque`: An insertion in the middle of the deque invalidates all the iterators and references to elements of the deque. An insertion at either end of the deque invalidates all the iterators to the deque, but has no effect on the validity of references to elements of the deque. [26.3.8.4/1]

* `list`: Does not affect the validity of iterators and references. If an exception is thrown there are no effects. [26.3.10.4/1].
The insert, emplace_front, emplace_back, emplace, push_front, push_back functions are covered under this rule.

* `forward_list`: None of the overloads of insert_after shall affect the validity of iterators and references [26.3.9.5/1]

* `array`: As a rule, iterators to an array are never invalidated throughout the lifetime of the array. One should take note, however, that during swap, the iterator will continue to point to the same array element, and will thus change its value.

Associative Containers

* All Associative Containers: The insert and emplace members shall not affect the validity of iterators and references to the container [26.2.6/9]

Unordered Associative Containers

* All Unordered Associative Containers: Rehashing invalidates iterators, changes ordering between elements, and changes which buckets elements appear in, but does not invalidate pointers or references to elements. [26.2.7/9]
The insert and emplace members shall not affect the validity of references to container elements, but may invalidate all iterators to the container. [26.2.7/14]
The insert and emplace members shall not affect the validity of iterators if (N+n) <= z * B, where N is the number of elements in the container prior to the insert operation, n is the number of elements inserted, B is the container’s bucket count, and z is the container’s maximum load factor. [26.2.7/15]

* All Unordered Associative Containers: In case of a merge operation (e.g., a.merge(a2)), iterators referring to the transferred elements and all iterators referring to a will be invalidated, but iterators to elements remaining in a2 will remain valid. (Table 91 — Unordered associative container requirements)

Container Adaptors

* `stack`: inherited from underlying container
* `queue`: inherited from underlying container
* `priority_queue`: inherited from underlying container

**Erasure**

Sequence Containers

* `vector`: The functions erase and pop_back invalidate iterators and references at or after the point of the erase. [26.3.11.5/3]

* `deque`: An erase operation that erases the last element of a deque invalidates only the past-the-end iterator and all iterators and references to the erased elements. An erase operation that erases the first element of a deque but not the last element invalidates only iterators and references to the erased elements. An erase operation that erases neither the first element nor the last element of a deque invalidates the past-the-end iterator and all iterators and references to all the elements of the deque. [ Note: pop_front and pop_back are erase operations. —end note ] [26.3.8.4/4]

* `list`: Invalidates only the iterators and references to the erased elements. [26.3.10.4/3]. This applies to erase, pop_front, pop_back, clear functions.
remove and remove_if member functions: Erases all the elements in the list referred by a list iterator i for which the following conditions hold: *i == value, pred(*i) != false. Invalidates only the iterators and references to the erased elements [26.3.10.5/15].
unique member function - Erases all but the first element from every consecutive group of equal elements referred to by the iterator i in the range [first + 1, last) for which *i == *(i-1) (for the version of unique with no arguments) or pred(*i, *(i - 1)) (for the version of unique with a predicate argument) holds. Invalidates only the iterators and references to the erased elements. [26.3.10.5/19]

* `forward_list`: erase_after shall invalidate only iterators and references to the erased elements. [26.3.9.5/1].
remove and remove_if member functions - Erases all the elements in the list referred by a list iterator i for which the following conditions hold: *i == value (for remove()), pred(*i) is true (for remove_if()). Invalidates only the iterators and references to the erased elements. [26.3.9.6/12].
unique member function - Erases all but the first element from every consecutive group of equal elements referred to by the iterator i in the range [first + 1, last) for which *i == *(i-1) (for the version with no arguments) or pred(*i, *(i - 1)) (for the version with a predicate argument) holds. Invalidates only the iterators and references to the erased elements. [26.3.9.6/16]

* All Sequence Containers: clear invalidates all references, pointers, and iterators referring to the elements of a and may invalidate the past-the-end iterator (Table 87 — Sequence container requirements). But for forward_list, clear does not invalidate past-the-end iterators. [26.3.9.5/32]

* All Sequence Containers: assign invalidates all references, pointers and iterators referring to the elements of the container. For vector and deque, also invalidates the past-the-end iterator. (Table 87 — Sequence container requirements)

Associative Containers

* All Associative Containers: The erase members shall invalidate only iterators and references to the erased elements [26.2.6/9]

* All Associative Containers: The extract members invalidate only iterators to the removed element; pointers and references to the removed element remain valid [26.2.6/10]

Container Adaptors

* `stack`: inherited from underlying container
* `queue`: inherited from underlying container
* `priority_queue`: inherited from underlying container

General container requirements relating to iterator invalidation:

* Unless otherwise specified (either explicitly or by defining a function in terms of other functions), invoking a container member function or passing a container as an argument to a library function shall not invalidate iterators to, or change the values of, objects within that container. [26.2.1/12]

* no swap() function invalidates any references, pointers, or iterators referring to the elements of the containers being swapped. [ Note: The end() iterator does not refer to any element, so it may be invalidated. —end note ] [26.2.1/(11.6)]

As examples of the above requirements:

* `transform` algorithm: The op and binary_op functions shall not invalidate iterators or subranges, or modify elements in the ranges [28.6.4/1]

* `accumulate` algorithm: In the range [first, last], binary_op shall neither modify elements nor invalidate iterators or subranges [29.8.2/1]

* `reduce` algorithm: binary_op shall neither invalidate iterators or subranges, nor modify elements in the range [first, last]. [29.8.3/5]
