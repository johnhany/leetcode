1. Speed up i/o for LeetCode:

    ```cpp
    static auto x = [](){
        // turn off sync
        std::ios::sync_with_stdio(false);
        // untie in/out streams
        cin.tie(NULL);
        return 0;
    }();
    ```

2. `string[i]` is a lot faster than `string.substr(i, 1)`

3. Use stride in for-loop:

    ```cpp
    for (int i = 0; i < n; i+=k)
        a[i]    //Do something with i
    ```

    is faster than

    ```cpp
    for (int i = 0; i < n; i++)
        a[i*k]    //Do something with i*k
    ```

4. Initialize `vector<int>` with `int[]`:

    ```cpp
    static const int arr[] = {16,2,77,29};
    vector<int> vec(arr, arr + sizeof(arr) / sizeof(arr[0]));
    ```

5. Check if `a` is in `set`:

    ```cpp
    const bool is_in = container.find(element) != container.end();
    ```

6. Check if `key` is in `map`, if not, insert `key, value`:

    ```cpp
    map<AType, BType>::iterator lb = mymap.lower_bound(key);
    if(lb != mymap.end() && !(mymap.key_comp()(key, lb->first))) {
        // key already exists
        // update lb->second if you care to
    } else {
        // the key does not exist in the map
        // use lb as a hint to insert
        mymap.insert(lb, map<AType, BType>::value_type(key, value));
    }
    ```

7. Number of `1` in binary format of int `x`:

    ```cpp
    int count = 0;
    while (x) {
        x = x & (x-1);
        count++;
    }
    ```

8. Keyword `volatile`:

    [https://stackoverflow.com/a/72617/3829845](https://stackoverflow.com/a/72617/3829845)

9. Execution order of `printf` with `++` operators:

    [https://www.geeksforgeeks.org/execution-printf-operators/](https://www.geeksforgeeks.org/execution-printf-operators/)

10. Pointer-to-member operator `.*` and `->*`:

    [https://stackoverflow.com/questions/2548555/dot-asterisk-operator-in-c](https://stackoverflow.com/questions/2548555/dot-asterisk-operator-in-c)

11. Scope resolution operator `::a`:

    [https://www.tutorialspoint.com/cplusplus-scope-resolution-operator](https://www.tutorialspoint.com/cplusplus-scope-resolution-operator)

12. Check if `x` is `2^k`:

    ```cpp
    !(x & (x-1))
    ```

13. Bitwise average number of `int` `x` and `y`:

    ```cpp
    (x & y) + ((x ^ y) >> 1)
    ```

14. Copy blocks of memory:

    ```cpp
    memcpy(a, b, sizeof(a));
    ```

    is faster than

    ```cpp
    std::copy(&a[0], &a[3], &b[0]);
    ```

15. `memcpy` vs `memmove`:

    Addresses of source and destination should not overlap when using `memcpy`.

    `memmove` is always safer but slightly slower than `memcpy`.

16. Assign a 2d array:

    If `array` is declared with `T array[M][N]` and we are still in the same scope as the declaration:

    ```cpp
    memset(array, 0, sizeof array);
    ```

    Otherwise, use:

    ```cpp
    memset(array, 0, sizeof(array[0][0]) * M * N);
    ```

17. `malloc` vs `new`:

    [https://stackoverflow.com/a/240308/3829845](https://stackoverflow.com/a/240308/3829845)
    [https://stackoverflow.com/a/184540/3829845](https://stackoverflow.com/a/184540/3829845)

18. The purpose of `extern "C"`:

    Overloading of function names is not supported in C. A function `void func(int, int)` would generate a function-name like `_func` by C compiler, but would be `_func_int_int` by C++ compiler. `extern "C"` makes sure that client C codes can link to the correct function.

19. Common undefined behaviours:

    [https://stackoverflow.com/a/367662/3829845](https://stackoverflow.com/a/367662/3829845)

20. Pass-by-reference vs pass-by-pointer:

    [https://stackoverflow.com/a/334866/3829845](https://stackoverflow.com/a/334866/3829845)

21. `mutable` keyword:

    [https://stackoverflow.com/a/2384201/3829845](https://stackoverflow.com/a/2384201/3829845)

22. `private` vs `protected`:

    [https://stackoverflow.com/a/224977/3829845](https://stackoverflow.com/a/224977/3829845)

23. Bitwise const vs logical const:

    [https://stackoverflow.com/a/3830484/3829845](https://stackoverflow.com/a/3830484/3829845)

24. Pointer and const - Clockwise/Spiral Rule:

    [https://stackoverflow.com/a/1143272/3829845](https://stackoverflow.com/a/1143272/3829845)

25. `friend` class and function:

    [https://www.geeksforgeeks.org/friend-class-function-cpp/](https://www.geeksforgeeks.org/friend-class-function-cpp/)

26. Lambda expression:

    [https://docs.microsoft.com/en-us/cpp/cpp/lambda-expressions-in-cpp?view=vs-2017](https://docs.microsoft.com/en-us/cpp/cpp/lambda-expressions-in-cpp?view=vs-2017)
    [https://stackoverflow.com/a/105061/3829845](https://stackoverflow.com/a/105061/3829845)
    [https://docs.microsoft.com/en-us/cpp/cpp/examples-of-lambda-expressions?view=vs-2017](https://docs.microsoft.com/en-us/cpp/cpp/examples-of-lambda-expressions?view=vs-2017)

27. `this` pointer:

    [https://www.tutorialspoint.com/cplusplus/cpp_this_pointer.htm](https://www.tutorialspoint.com/cplusplus/cpp_this_pointer.htm)

28. Stack memory vs heap memory:

    [https://stackoverflow.com/a/80113/3829845](https://stackoverflow.com/a/80113/3829845)
    [https://www.programmerinterview.com/index.php/data-structures/difference-between-stack-and-heap/](https://www.programmerinterview.com/index.php/data-structures/difference-between-stack-and-heap/)

29. Smart pointer:

    [https://www.programmerinterview.com/index.php/data-structures/difference-between-stack-and-heap/](https://www.programmerinterview.com/index.php/data-structures/difference-between-stack-and-heap/)
    [https://docs.microsoft.com/en-us/cpp/cpp/smart-pointers-modern-cpp?view=vs-2017](https://docs.microsoft.com/en-us/cpp/cpp/smart-pointers-modern-cpp?view=vs-2017)

30. Memory leak:

    [https://www.geeksforgeeks.org/memory-leak-in-c-and-how-to-avoid-it/](https://www.geeksforgeeks.org/memory-leak-in-c-and-how-to-avoid-it/)

31. Header-only:

    [https://stackoverflow.com/questions/12671383/benefits-of-header-only-libraries](https://stackoverflow.com/questions/12671383/benefits-of-header-only-libraries)

32. Dangling pointer and wild pointer:

    [https://www.geeksforgeeks.org/dangling-void-null-wild-pointers/](https://www.geeksforgeeks.org/dangling-void-null-wild-pointers/)

33. Thread `join` vs `detach`:

    [https://stackoverflow.com/questions/37015775/what-is-different-between-join-and-detach-for-multi-threading-in-c](https://stackoverflow.com/questions/37015775/what-is-different-between-join-and-detach-for-multi-threading-in-c)

34. Iterator invalidation rule:

    [https://stackoverflow.com/a/54004916/3829845](https://stackoverflow.com/a/54004916/3829845)

