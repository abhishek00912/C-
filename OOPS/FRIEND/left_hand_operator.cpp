#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    Student(string n, int a) : name(n), age(a) {}

    // Declare friend function for operator overloading
    friend ostream& operator<<(ostream& out, const Student& s);
};

// Define the overloaded operator<<
ostream& operator<<(ostream& out, const Student& s) {
    out << "Name: " << s.name << ", Age: " << s.age;
    return out;
}

int main() {
    Student s1("Abhishek", 20);
    cout << s1 << endl;  // This works because we overloaded <<

    return 0;
}
