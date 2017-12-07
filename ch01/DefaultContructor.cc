#include <iostream>
using std::cout;
using std::endl;

class A {
public:
    int a_;
    char b_;
};

class B {
public:
    int a_ = 10;
    char b_ = 'b';
};

class C {
public:
    int a_;
    char b_;
    virtual int fun() { return 0; }
};

int main() {
    A a;
    cout << "class A: " << a.a_ << " " << a.b_ << endl;
    B b;
    cout << "class B: " << b.a_ << " " << b.b_ << endl;
    C c;
    cout << "class B: " << c.a_ << " " << c.b_ << endl;
}
