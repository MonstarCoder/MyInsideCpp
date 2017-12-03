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

    A(A&& B) {
        a_ = B.a_;
        std::cout << "move constructor" << std::endl;
    }

    A& operator=(A& B) {
        a_ = B.a_;
        std::cout << "copy assignment" << std::endl;
    }

//private:
    A& operator=(A&& B) {
        a_ = B.a_;
        std::cout << "move assignment" << std::endl;
    }
};

A fun() {
    A tmp(1);
    return tmp;
}

int main() {
    class A a = fun();
    //A a;
    //A b(std::move(a));
    class A b = std::move(a);
    b = a;
    return 0;
}
