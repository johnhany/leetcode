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
