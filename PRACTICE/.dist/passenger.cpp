#include <iostream>
using namespace std;

class ticketCounter {
private:
    unsigned int totalPassengers;
    double totalAmount;

public:
    // Constructor
    ticketCounter() {
        totalPassengers = 0;
        totalAmount = 0.0;
    }

    // For a paying passenger
    void payingPassenger() {
        totalPassengers++;
        totalAmount += 50.0;
    }

    // For a child passenger
    void childPassenger() {
        totalPassengers++;
    }

    // Display totals
    void display() const {
        cout << "\nTotal Passengers: " << totalPassengers << endl;
        cout << "Total Amount Collected: Rs. " << totalAmount << endl;
    }
};

int main() {
    ticketCounter counter;
    char choice;

    cout << "Toy Train Ticket Counter System\n";
    cout << "--------------------------------\n";
    cout << "Press:\n";
    cout << "P - Paying Passenger\n";
    cout << "C - Child Passenger\n";
    cout << "D - Display Totals and Exit\n";

    do {
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (toupper(choice)) {
            case 'P':
                counter.payingPassenger();
                cout << "Paying passenger recorded.\n";
                break;
            case 'C':
                counter.childPassenger();
                cout << "Child passenger recorded.\n";
                break;
            case 'D':
                counter.display();
                cout << "Exiting the program.\n";
                break;
            default:
                cout << "Invalid input. Try again.\n";
        }
    } while (toupper(choice) != 'D');

    return 0;
}



