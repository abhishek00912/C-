#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    string name;
    double basicSalary;
    static int employeeCount;

public:
    Employee(string n = "", double sal = 0.0) : name(n), basicSalary(sal) {
        employeeCount++;
    }

    inline void displayDetails() {
        cout << "Name: " << name << "\nBasic Salary: " << basicSalary << endl;
    }

    void inputDetails() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
    }

    static int getCount() {
        return employeeCount;
    }
};

int Employee::employeeCount = 0;

class Manager : public Employee {
private:
    double bonus;

public:
    Manager(string n = "", double sal = 0.0, double b = 0.0) : Employee(n, sal), bonus(b) {}

    void inputDetails() {
        Employee::inputDetails();  // Call base class inputDetails()
        cout << "Enter Bonus: ";
        cin >> bonus;
    }

    void displayDetails() {
        Employee::displayDetails();
        cout << "Bonus: " << bonus << "\nTotal Salary: " << (basicSalary + bonus) << endl;
    }

    double operator+(Manager &m) {
        return (basicSalary + bonus) + (m.basicSalary + m.bonus);
    }
};

int main() {
    Manager m1, m2;

    cout << "Enter details for Manager 1:\n";
    m1.inputDetails();

    cout << "Enter details for Manager 2:\n";
    m2.inputDetails();

    cout << "\n--- Manager Details ---\n";
    m1.displayDetails();
    m2.displayDetails();

    cout << "\nTotal number of employees: " << Employee::getCount() << endl;
    cout << "Sum of both manager salaries: " << (m1 + m2) << endl;

    return 0;
}
