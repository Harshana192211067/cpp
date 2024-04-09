#include <iostream>

int main() {
    int rows;

    std::cout << "Enter the number of rows: ";
    std::cin >> rows;

    // Check if input is valid
    if (rows <= 0) {
        std::cout << "Invalid " << std::endl;
        return 0;
    }

    int value = 2;

    for (int i = 0; i < rows; ++i) {
        // Initialize a counter for the number of values printed in this row
        int count = 0;

        // Print the value multiple times based on the row number
        while (count <= i) {
            // Print the value
            std::cout << value;

            // Print spaces after the value
            for (int space = 0; space < 5 - value / 10; ++space) {
                std::cout << " ";
            }

            // Increment the counter
            ++count;
        }

        // Move to the next line after printing the row
        std::cout << std::endl;

        // Update the value for the next row
        value *= 2;
    }

    return 0;
}

