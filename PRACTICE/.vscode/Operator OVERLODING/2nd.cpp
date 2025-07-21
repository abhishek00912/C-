#include<iostream>
using namespace std;

class Complex {
    int real;
    int img;

public:
    Complex() {
        real = 0;
        img = 0;
    }

    Complex(int real, int img) {
        this->real = real;
        this->img = img;
    }

    Complex operator+(const Complex &c) {
        Complex ans;
        ans.real = this->real + c.real;
        ans.img = this->img + c.img;
        return ans;
    }

    void display() {
        cout << real << " + " << img << "i" << endl;
    }
};

int main() {
    Complex c1(1, 4);
    Complex c2(3, 4);
    Complex c3 = c1 + c2;
    c3.display();
    return 0;
}