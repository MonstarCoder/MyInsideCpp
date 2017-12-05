#include <cstdio>
#include <iostream>
using std::cout;
using std::endl;

struct A {
char a_;
char b_;
virtual void fun() {};
};

int main() {
    class A a;
    cout << "sieof char: "<< sizeof(char) << endl
        << "sieof ptr: "<< sizeof(void*) << endl
        << "sieof A: "<< sizeof(A) << endl;
    //cout << "a_: " << &A::a_ << endl
        //<< "b_: " << &A::b_ << endl
        //<< "fun(): " << &A::fun << endl;

    printf("a_: %p\n", (&A::a_));
    printf("b_: %p\n", (&A::b_));
    printf("fun: %p\n", (&A::fun));

    return 0;
}
