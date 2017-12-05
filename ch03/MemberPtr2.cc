#include <cstdio>
#include <iostream>
using std::cout;
using std::endl;

struct A {
int a_;
};

struct B : public A {
int b_;
};

int main() {

    printf("A: a_: %p\n", (&A::a_));
    printf("B: a_: %p\n", (&B::a_));
    printf("B: b_: %p\n", (&B::b_));

    return 0;
}
