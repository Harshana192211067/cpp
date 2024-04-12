#include <iostream>

class Add {
public:
    int num;

    Add(int n) : num(n) {}

    Add operator+(int value) {
        return Add(num + value);
    }
};

int main() {
    int num1, num2;
    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;

    Add obj1(num1);
    Add result = obj1 + num2;

    std::cout << "Result of addition: " << result.num << std::endl;

    return 0;
}

