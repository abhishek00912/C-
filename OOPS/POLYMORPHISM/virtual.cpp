#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {  // virtual function
        cout << "Base class show() called" << endl;
    }
};

class Derived : public Base {
public:
    void show() override {  // overrides Base::show()
        cout << "Derived class show() called" << endl;
    }
};

int main() {
    Base* bptr;
    Derived d;
    bptr = &d;

    bptr->show();  // Calls Derived::show() due to virtual function
    return 0;
}
//  🧠 Behind the Scenes: The vtable
// When you use virtual, the compiler builds a virtual table (vtable) for the class. Here’s what happens:

// Base has a virtual table entry for show().

// Derived overrides show(), so it replaces the Base version in the virtual table.

// When bptr->show() is called, it checks the vtable of the actual object (d, which is Derived).

// It sees the Derived::show() function there and calls it.