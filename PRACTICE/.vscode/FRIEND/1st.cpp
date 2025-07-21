#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;

public:
    // Constructor
    Rectangle(int l, int w) {
        length = l;
        width = w;
    }

    // Friend function declaration
    friend int calculateArea(Rectangle r);
};

// Friend function definition
int calculateArea(Rectangle r) {
    // Can access private members: length and width
    return r.length * r.width;
}

int main() {
    Rectangle rect(10, 5);

    // Call the friend function
    int area = calculateArea(rect);

    cout << "Area of rectangle: " << area << endl;

    return 0;
}
