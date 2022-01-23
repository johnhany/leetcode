## friend class

```
class A {
private:
    int a;

public:
    A() { a = 999; }
    friend class B; // Friend Class
};

class B {
private:
    int b;

public:
    void showA(A& x)
    {
        // Since B is friend of A, it can access
        // private members of A
        std::cout << "A::a=" << x.a;
    }
};

A a;
B b;
b.showA(a);
```

## protected vs private

[https://stackoverflow.com/questions/29408896/the-protected-and-private-member-variables-in-c-inheritance](https://stackoverflow.com/questions/29408896/the-protected-and-private-member-variables-in-c-inheritance)

No class can access private variables. Not even subclasses.

Only subclasses can access protected variables.

All classes can access public variables.

```
class A
{
public:
    int x;
protected:
    int y;
private:
    int z;
};

class B : public A
{
    // x is public
    // y is protected
    // z is not accessible from B
};

class C : protected A
{
    // x is protected
    // y is protected
    // z is not accessible from C
};

class D : private A    // 'private' is default for classes
{
    // x is private
    // y is private
    // z is not accessible from D
};
```

## virtual

```
class Base {
public:
    void Method1()  {  std::cout << "Base::Method1" << std::endl;  }
    virtual void Method2()  {  std::cout << "Base::Method2" << std::endl;  }
};

class Derived : public Base {
public:
    void Method1()  {  std::cout << "Derived::Method1" << std::endl;  }
    void Method2()  {  std::cout << "Derived::Method2" << std::endl;  }
};

Base* obj = new Derived();
//  Note - constructed as Derived, but pointer stored as Base*

obj->Method1();  //  Prints "Base::Method1"
obj->Method2();  //  Prints "Derived::Method2"

// `virtual void funcFoo() const = 0;`
// - You can't change the state of the object
// - You can call this function via const objects
// - You can only call another const member functions on this object

// `virtual void funcFoo() = 0;`
// - You can change the state of the object
// - You can't call this function via const objects
```
