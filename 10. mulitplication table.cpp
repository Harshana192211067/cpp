#include <iostream>

int main() {
    int num;

    std::cout << "Enter the number for the multiplication table: ";
    std::cin >> num;

    std::cout << "Multiplication Table of " << num << ":\n";
    for (int i = 1; i <= 10; ++i) {
        std::cout << num << " * " << i << " = " << (num * i) << std::endl;
    }

    return 0;
}

