#include <iostream>

// Function to find the sum of diagonal elements in a 2D array
int sumDiagonalElements(int arr[][3], int rows, int cols) {
    int sum = 0;

    // Assuming a square matrix (rows = cols)
    for (int i = 0; i < rows; ++i) {
        sum += arr[i][i]; // Sum of elements on the main diagonal
    }

    return sum;
}

int main() {
    const int rows = 3;
    const int cols = 3;

    int matrix[rows][cols];

    // Input elements for the matrix
    std::cout << "Enter elements for a " << rows << "x" << cols << " matrix:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cin >> matrix[i][j];
        }
    }

    // Call the function to find the sum of diagonal elements
    int diagonalSum = sumDiagonalElements(matrix, rows, cols);

    // Output the result
    std::cout << "Sum of diagonal elements: " << diagonalSum << std::endl;

    return 0;
}

