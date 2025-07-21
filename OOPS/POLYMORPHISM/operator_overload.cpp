#include <iostream>
using namespace std;

class Complex {
    int real, imag;
public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}

    Complex operator+(const Complex &c) {
        return Complex(real + c.real, imag + c.imag);
    }

    Complex operator-(const Complex &c) {
        return Complex(real - c.real, imag - c.imag);
    }

    Complex operator*(const Complex &c) {
        return Complex(real*c.real - imag*c.imag, real*c.imag + imag*c.real);
    }

    Complex operator/(const Complex &c) {
        double denom = c.real*c.real + c.imag*c.imag;
        return Complex((real*c.real + imag*c.imag)/denom, (imag*c.real - real*c.imag)/denom);
    }

    void display() {
        cout << real << " + i" << imag << endl;
    }
};

int main() {
    Complex c1(5, 4), c2(3, 2);
    Complex sum = c1 + c2;
    Complex diff = c1 - c2;
    Complex prod = c1 * c2;
    Complex quot = c1 / c2;
    sum.display();
    diff.display();
    prod.display();
    quot.display();
    return 0;
}
