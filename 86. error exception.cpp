#include <iostream>
#include <stdexcept>

// Function to perform division
double divide(int dividend, int divisor) {
    if (divisor == 0) {
        throw std::invalid_argument("divide by zero");
    }
    return static_cast<double>(dividend) / divisor;
}

int main() {
    int dividend, divisor;

    // Input from the user
    std::cout << "Enter dividend: ";
    std::cin >> dividend;
    std::cout << "Enter divisor: ";
    std::cin >> divisor;

    try {
        // Perform division
        double result = divide(dividend, divisor);
        std::cout << "Result: " << result << std::endl;
    } catch (const std::invalid_argument& e) {
        // Handle division by zero exception
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}

