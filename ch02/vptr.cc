class A {
public:
    A() : a_('a') {}
    virtual void fffff() {}
private:
    char a_;
};

int main() {
    A a;
    return 0;
}
