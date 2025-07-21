#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    // Default constructor
    Student() : name(""), age(0) {}

    // Friend function to overload >> operator
    friend istream& operator>>(istream& in, Student& s);

    // Display function
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Overloading >> operator
istream& operator>>(istream& in, Student& s) {
    cout << "Enter name: ";
    in >> s.name;
    cout << "Enter age: ";
    in >> s.age;
    return in;
}

int main() {
    Student s;
    cin >> s;
    cout << "\nStudent Details:" << endl;
    s.display();

    return 0;
}
