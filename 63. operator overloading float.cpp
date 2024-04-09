#include <iostream>

class FLOAT {
private:
    float value;

public:
    // Constructor
    FLOAT(float val) : value(val) {}

    // Overloading addition operator
    FLOAT operator+(const FLOAT& other) {
        return FLOAT(value + other.value);
    }

    // Overloading subtraction operator
    FLOAT operator-(const FLOAT& other) {
        return FLOAT(value - other.value);
    }

    // Overloading multiplication operator
    FLOAT operator*(const FLOAT& other) {
        return FLOAT(value * other.value);
    }

    // Overloading division operator
    FLOAT operator/(const FLOAT& other) {
        if (other.value == 0) {
            std::cerr << "Error: Division by zero" << std::endl;
            return FLOAT(0.0);
        }
        return FLOAT(value / other.value);
    }

    // Function to display the value of the object
    void display() {
        std::cout << value;
    }
};

int main() {
    FLOAT F1(2.5);
    FLOAT F2(1.2);

    // Addition
    std::cout << "F1 + F2 = ";
    (F1 + F2).display();
    std::cout << std::endl;

    // Subtraction
    std::cout << "F1 - F2 = ";
    (F1 - F2).display();
    std::cout << std::endl;

    // Multiplication
    std::cout << "F1 * F2 = ";
    (F1 * F2).display();
    std::cout << std::endl;

    // Division
    std::cout << "F1 / F2 = ";
    (F1 / F2).display();
    std::cout << std::endl;

    return 0;
}

