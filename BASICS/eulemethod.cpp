#include <iostream>
#include <iomanip>
using namespace std;

// Define the differential equation dy/dx = f(x, y)
double f(double x, double y) {
    return x + y;
}

int main() {
    double x0 = 0.0;
    double y0 = 1.0;
    double h = 0.2;
    int n = 5;

    cout << fixed << setprecision(4);
    cout << "Step\t x\t\t y\n";
    cout << "--------------------------\n";
    cout << "0\t " << x0 << "\t " << y0 << endl;

    for (int i = 1; i <= n; ++i) {
        y0 = y0 + h * f(x0, y0);
        x0 = x0 + h;
        cout << i << "\t " << x0 << "\t " << y0 << endl;
    }

    return 0;
}
