#include<iostream>

using namespace std;

class Animal {
public:
      void speak() { cout << "Animal speaks\n"; }
};

class Dog : public Animal {
public:
    void speak() { cout << "Dog barks\n"; }
};

int main() {
    Dog d;
    Animal* a = &d;  // ✅ Upcasting
    a->speak();      // Calls Animal's speak (not polymorphic yet)
}
