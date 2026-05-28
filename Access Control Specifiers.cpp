#include <iostream>
using namespace std;

class Base {
private:
    int Base_private;
protected:
    int Base_protected;
public:
    int Base_public;
    void setBasenum(int n1, int n2, int n3) {
        Base_private = n1;   // OK inside Base
        Base_protected = n2; // OK inside Base
        Base_public = n3;    // OK inside Base
    }
};

class Derived : public Base {
public:
    void setBasenum(int n1, int n2, int n3) {
        // Base_private = n1; // ? ERROR
        Base_protected = n2; // ? OK
        Base_public = n3;    // ? OK
    }
};

int main() {
    Base base;
    base.Base_public = 3; // ? only public accessible
    return 0;
}
