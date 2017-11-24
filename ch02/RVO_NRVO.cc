#include <iostream>

class A {

private:
    int a_;

public:
    A(int a) : a_(a) { std::cout << "constructor" << std::endl; }

    A(const A& C) {
        a_ = C.a_;
        std::cout << "copy constructor" << std::endl;
    }
};

A fun() {
    A tmp(1);
    return tmp;
}

int main() {
    fun();
    return 0;
}
