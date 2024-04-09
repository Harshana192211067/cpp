#include <iostream>
#include <stdexcept>

int main() {
    try {
        // Example 1: Integer division by zero
        int a = 10, b = 0;
        int result = a / b; // Division by zero
        std::cout << "Result of division: " << result << std::endl;

    } catch (int num) {
        // Catch block for integer exceptions
        std::cerr << "Integer exception caught: " << num << std::endl;

    } catch (const std::string& str) {
        // Catch block for string exceptions
        std::cerr << "String exception caught: " << str << std::endl;

    } catch (...) {
        // Catch block for any other exceptions
        std::cerr << "Unknown exception caught." << std::endl;
    }

    try {
        // Example 2: Accessing out of bounds index in an array
        int arr[5] = {1, 2, 3, 4, 5};
        int index = 10; // Out of bounds index
        std::cout << "Value at index " << index << ": " << arr[index] << std::endl;

    } catch (int num) {
        // Catch block for integer exceptions
        std::cerr << "Integer exception caught: " << num << std::endl;

    } catch (const std::string& str) {
        // Catch block for string exceptions
        std::cerr << "String exception caught: " << str << std::endl;

    } catch (...) {
        // Catch block for any other exceptions
        std::cerr << "Unknown exception caught." << std::endl;
    }

    return 0;
}

