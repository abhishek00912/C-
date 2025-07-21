#include <iostream>
using namespace std;

class Animal {
public:
    virtual void speak() {      // Base class ka function
        cout << "sound" << endl;
    }
};

class Dog : public Animal {
public:
    void speak() {              // Derived class ne same function override kiya
        cout << "bark" << endl;
    }
};

int main() {
    Animal* p;
    Dog d;
    p = &d;
    p->speak(); // Output: bark (Dog ka function call hoga, not Animal ka)
    // return 0;

Animal a;
Dog d;

a.speak();

d.speak();

d.Animal::speak();

}