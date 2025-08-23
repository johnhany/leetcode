#include <iostream>
#include <thread>

using namespace std;


class resource {
public:
    int x;
};

class foo {
public:
    // constructor
    foo() : p(new resource()) {
        std::cout << "constructor" << std::endl;
    }
    // destructor
    ~foo() {
        std::cout << "destructor" << std::endl;
        delete p;
    }
    // copy constructor
    foo(const foo& other) : p(new resource{*(other.p)}) {
        std::cout << "copy constructor" << std::endl;
    }
    // move constructor
    foo(foo&& other) : p(other.p) {
        std::cout << "move constructor" << std::endl;
        other.p = nullptr;
    }
    // copy/move assignment
    foo& operator=(foo other) noexcept {
        std::cout << "copy/move assignment" << std::endl;
        std::swap(p, other.p);
        return *this;
    }

    foo operator+(const foo& other) {
        foo rst;
        rst.p->x = this->p->x + other.p->x;
        return rst;
    }

private:
    resource *p;
};

foo get_foo() {
    foo rst;
    return rst;
}

int main() {
    std::cout << "1" << std::endl;
    foo a;

    std::cout << "2" << std::endl;
    foo b = a;

    std::cout << "3" << std::endl;
    foo c;
    c = a;

    std::cout << "4" << std::endl;
    foo d(a);

    std::cout << "5" << std::endl;
    foo e;
    e = std::move(a);

    std::cout << "6" << std::endl;
    foo f;
    f = d + e;

    std::cout << "7" << std::endl;
    foo g(get_foo());

    std::cout << "DONE" << std::endl;

    return EXIT_SUCCESS;
}