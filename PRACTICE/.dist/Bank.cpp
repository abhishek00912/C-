
// #include <iostream>
// #include <string>
// using namespace std;

// class BankAccount {
// public:
//     string name;
//     int accountNumber;
//     string accountType;
//     double balance;

//     void assignInitialValues(string n, int accNo, string accType, double bal) {
//         name = n;
//         accountNumber = accNo;
//         accountType = accType;
//         balance = bal;
//     }

//     void deposit(double amount) {
//         balance += amount;
//         cout << "Amount deposited successfully.\n";
//     }

//     void withdraw(double amount) {
//         if (amount <= balance) {
//             balance -= amount;
//             cout << "Amount withdrawn successfully.\n";
//         } else {
//             cout << "Insufficient balance.\n";
//         }
//     }

//     void display() {
//         cout << "Name: " << name << ", Balance: " << balance << endl;
//     }
// };

// int main() {
//     BankAccount acc;
//     acc.assignInitialValues("Abhishek", 12345, "Savings", 1000.0);
//     acc.deposit(500);
//     acc.withdraw(300);
//     acc.display();

//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;

// class BankAccount {
// public:
//     string depositorName;
//     int accountNumber;
//     string accountType;
//     double balance;

//     void assignInitialValues(string name, int accNo, string accType, double bal) {
//         depositorName = name;
//         accountNumber = accNo;
//         accountType = accType;
//         balance = bal;
//     }

//     void deposit(double amount) {
//         balance += amount;
//         cout << "Deposited: " << amount << endl;
//     }

//     void withdraw(double amount) {
//         if (amount > balance) {
//             cout << "Insufficient balance!" << endl;
//         } else {
//             balance -= amount;
//             cout << "Withdrawn: " << amount << endl;
//         }
//     }

//     void display() {
//         cout << "Account Holder: " << depositorName << endl;
//         cout << "Balance: " << balance << endl;
//     }
// };

// int main() {
//     BankAccount acc;
//     acc.assignInitialValues("Alice", 12345, "Savings", 1000.0);
//     acc.deposit(500);
//     acc.withdraw(200);
//     acc.display();
//     return 0;
// }

#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string depositorName;
    int accountNumber;
    string accountType;
    double balance;

public:
    void assignInitialValues(string name, int accNo, string accType, double bal) {
        depositorName = name;
        accountNumber = accNo;
        accountType = accType;
        balance = bal;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }

    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        }
    }

    void display() {
        cout << "Account Holder: " << depositorName << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc;
    acc.assignInitialValues("Bob", 67890, "Current", 2000.0);
    acc.deposit(1000);
    acc.withdraw(2500); // Should show insufficient balance
    acc.withdraw(500);
    acc.display();
    return 0;
}

