#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;

    // Constructor with a parameter (name)
    Student(string name) {
        this->name = name;
    }

    // Constructor with no parameters
    Student() {
        this->name = "Unknown";
    }

    void display() {
        cout << "Student Name: " << name << endl;
    }
};

int main() {
    Student s1("Alice"); // Object with a name
    Student s2;          // Object without a name

    s1.display(); // Output: Student Name: Alice
    s2.display(); // Output: Student Name: Unknown

    return 0;
}