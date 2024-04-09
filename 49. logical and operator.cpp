#include <iostream>
#include <string>

std::string logicalAnd(bool a, bool b) {
    return (a && b) ? "true" : "false";
}

int main() {
    bool a, b;

    // Input from the user
    std::cout << "Enter the first boolean value (0 for false, 1 for true): ";
    std::cin >> a;
    std::cout << "Enter the second boolean value (0 for false, 1 for true): ";
    std::cin >> b;

    // Calculate and print the result
    std::cout << "Result of logical AND operation: " << logicalAnd(a, b) << std::endl;

    return 0;
}

