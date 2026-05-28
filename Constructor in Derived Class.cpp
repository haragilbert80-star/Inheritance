#include <iostream>
using namespace std;

class Base {
private:
    int Base_num;
public:
    Base() {
        cout << "Constructor of base class" << endl;
        Base_num = 1;
    }
    Base(int n) {
        cout << "Constructor of base class" << endl;
        Base_num = n;
    }
};

class Derived : public Base {
private:
    int Derived_num;
public:
    Derived(int n1) {
        cout << "Constructor of derived class" << endl;
        Derived_num = n1;
    }
    Derived(int n1, int n2) : Base(n1) {
        cout << "Constructor of derived class" << endl;
        Derived_num = n2;
    }
};

int main() {
    Derived d1(2);
    Derived d2(1, 2);
    return 0;
}
