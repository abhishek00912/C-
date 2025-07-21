#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    Person(string n, int a) : name(n), age(a) {}

    // Friend function to overload <<
    friend ostream& operator<<(ostream& out, const Person& p);
};

// Definition of << operator
ostream& operator<<(ostream& out, const Person& p) {
    out << "Name: " << p.name << ", Age: " << p.age;
    return out;
}

int main() {
    Person p1("Abhishek", 21);
    cout << p1 << endl; // Now works because << is overloaded
    return 0;
}
