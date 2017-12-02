#include <iostream>
#include <utility>

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

    A& operator=(A B) {
        a_ = B.a_;
        std::cout << "= constructor" << std::endl;
    }
};

A fun() {
    A tmp(1);
    return tmp;
}

int main() {
    //class A a;
    //a = fun();
    A a;
    A b;
    b = std::move(a);
    return 0;
}
