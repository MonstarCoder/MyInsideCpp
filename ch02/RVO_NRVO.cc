#include <iostream>

class A {

private:
    int a_;

public:
    A() { std:: cout << "default constructor" << std::endl; }
    A(int a) : a_(a) { std::cout << "constructor" << std::endl; }

    A(const A& B) {
        a_ = B.a_;
        std::cout << "copy constructor" << std::endl;
    }
};

A fun() {
    A tmp(1);
    return tmp;
}

int main() {
    class A a;
    a = fun();
    return 0;
}
