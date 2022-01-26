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

## scope resolution

```
char a = 'm';
static int b = 50;

int main() {
    char a = 's';

    cout << "The static variable : "<< ::b;
    cout << "\nThe local variable : " << a;
    cout << "\nThe global variable : " << ::a;
}
```

## dangling, void, null and wild pointer

    * Dangling pointer: a pointer pointing to a memory location that has been deleted (or freed).
    * Void pointer: a pointer that points to some data location in storage, which doesn’t have any specific type.
    * NULL Pointer: a pointer which is pointing to nothing.
    * Wild pointer: a pointer which has not been initialized to anything (not even NULL).

## pysical/bitwise constness vs logical constness

[https://stackoverflow.com/questions/3830367/difference-between-logical-and-physical-const-ness](https://stackoverflow.com/questions/3830367/difference-between-logical-and-physical-const-ness)

"Physical" constness comes from declaring an object const, and could, in principle, be enforced by placing the object in read-only memory, so it cannot change. Attempting to change it will cause undefined behaviour.

"Logical" constness comes from declaring a reference or pointer const, and is enforced by the compiler. The object itself may or may not be "physically" const, but the reference cannot be used to modify it without a cast. If the object is not "physically" const, then C++ allows you to modify it, using const_cast to circumvent the protection.

## abs of int

clang implementation

```
int a = -2147483648;
int sign = a >> (sizeof(int) * 8 - 1);
unsigned int b = (a ^ sign) - sign;
```
