#include <iostream>

class Arithmetic {
public:
    float num;

    Arithmetic(float n) : num(n) {}

    // Overloading addition operator
    Arithmetic operator+(float value) {
        float sum = value + num;
        return sum;
    }

    // Overloading subtraction operator
    Arithmetic operator-(float value) {
        float diff = num - value;
        return Arithmetic(diff);
    }

    // Overloading multiplication operator
    Arithmetic operator*(float value) {
        float prod = value * num;
        return Arithmetic(prod);
    }

    // Overloading division operator
    Arithmetic operator/(float value) {
        if (value == 0) {
            std::cerr << "Error: Division by zero" << std::endl;
            return Arithmetic(0.0);
        }
        float quotient = num / value;
        return Arithmetic(quotient);
    }
};

int main() {
    float num1, num2;
    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;

    Arithmetic obj1(num1);

    // Addition
    Arithmetic addResult = obj1 + num2;
    std::cout << "Result of addition: " << addResult.num << std::endl;

    // Subtraction
    Arithmetic subResult = obj1 - num2;
    std::cout << "Result of subtraction: " << subResult.num << std::endl;

    // Multiplication
    Arithmetic mulResult = obj1 * num2;
    std::cout << "Result of multiplication: " << mulResult.num << std::endl;

    // Division
    Arithmetic divResult = obj1 / num2;
    std::cout << "Result of division: " << divResult.num << std::endl;

    return 0;
}

