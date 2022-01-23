## int_min, int_max

```
int int_max = (int)((~((unsigned int) 0)) >> 1);
int int_min = ~int_max;
```

## avg of two int

```
int x = 5;
int y = 8;
int avg = (x & y) + ((x ^ y) >> 1);
```

## num of 1 in binary format of int

```
int x = 7;
int count = 0;
while (x) {
    x = x & (x-1);
    count++;
}
cout << count << endl;
```

## nullptr vs NULL

`nullptr` is pointer type. `NULL` (which equals to `0`) can be ambiguous (i.e. `f(int)` vs `f(foo*)`)
