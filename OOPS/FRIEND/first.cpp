#include <iostream>
using namespace std;

class Box {
private:
    int length;

public:
    Box() : length(0) {}

    // Friend function declaration
    friend void printLength(Box b);
};

// Friend function definition
void printLength(Box b) {
    // Accessing private member length
    cout << "Length of the box is: " << b.length << endl;
}


int main() {
    Box b1;
    printLength(b1);  // Call friend function

    return 0;
}
