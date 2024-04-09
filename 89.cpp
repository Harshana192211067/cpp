#include <iostream>

using namespace std;

class Complex {
public:
    int a, b;

    // Constructor
    Complex(int a = 0, int b = 0) : a(a), b(b) {}

    // Overloading + operator for addition of complex numbers
    Complex operator+(const Complex& c) {
        Complex temp;
        temp.a = a + c.a;
        temp.b = b + c.b;
        return temp;
    }
};

int main() {
    Complex c1(3, 4);
    Complex c2(5, 6);
    Complex sum = c1 + c2;

    cout << "Sum: " << sum.a << "+" << sum.b <<"i"<< endl;

    return 0;
}

