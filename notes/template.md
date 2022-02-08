## std::tie

[https://stackoverflow.com/questions/43762651/how-does-stdtie-work](https://stackoverflow.com/questions/43762651/how-does-stdtie-work)

```
int a;
std::tie(a) = std::make_tuple(24);
return a; // 24
```

std::tie(a) initializes a data member reference to a. std::tuple<int>(24) creates a data member with value 24, and the assignment assigns 24 to the data member reference in the first structure. But since that data member is a reference bound to a, that basically assigns 24 to a.
