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
