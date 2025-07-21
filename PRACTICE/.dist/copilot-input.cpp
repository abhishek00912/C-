#include <iostream>
#include <string>
using namespace std;

class student {
private:
    long long int id = 20100100100; // Base ID, last three digits are 000
    float marks = 0;

public:
    string name;

    void setid(long long int i) {
        id = 201001001000 + i; // Set ID by adding the last three digits
    }
    void setmarks(float m) {
        marks = m;
    }
    long long int getid() {
        return id;
    }
    float getmarks() {
        return marks;
    }

    void displayStudentInfo() {
        cout << "Name: " << name << endl;
        cout << "ID: " << getid() << endl;
        cout << "Marks: " << marks << endl;
    }
};

void inputStudent(student& s) {
    cout << "Enter student name: ";
    getline(cin, s.name);

    int lastThreeDigits;
    cout << "Enter last three digits of student ID: ";
    cin >> lastThreeDigits;
    s.setid(lastThreeDigits);
    cin.ignore(); // Consume newline

    float marks_input;
    cout << "Enter student marks: ";
    cin >> marks_input;
    s.setmarks(marks_input);
    cin.ignore(); // Consume newline
}

int main() {
    student s1;
    student s2;

    cout << "Enter information for student 1:\n";
    inputStudent(s1);

    cout << "Enter information for student 2:\n";
    inputStudent(s2);

    cout << "\nStudent 1 information:\n";
    s1.displayStudentInfo();

    cout << "\nStudent 2 information:\n";
    s2.displayStudentInfo();

    return 0;
}