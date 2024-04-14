#include <iostream>

int main() {
    int size1, size2;

    // Input for array A
    std::cout << "Enter number of elements in array A: ";
    std::cin >> size1;

    int arr1[size1];
    std::cout << "Enter elements of array A: ";
    for (int i = 0; i < size1; ++i) {
        std::cin >> arr1[i];
    }

    // Input for array B
    std::cout << "Enter number of elements in array B: ";
    std::cin >> size2;

    int arr2[size2];
    std::cout << "Enter elements of array B: ";
    for (int i = 0; i < size2; ++i) {
        std::cin >> arr2[i];
    }

    // Merging arrays A and B into array C
    int size3 = size1 + size2;
    int arr3[size3];

    // Copy elements from array A to array C
    for (int i = 0; i < size1; ++i) {
        arr3[i] = arr1[i];
    }

    // Copy elements from array B to array C
    for (int i = 0; i < size2; ++i) {
        arr3[size1 + i] = arr2[i];
    }

    // Output merged array C
    std::cout << "Merged array in array C:" << std::endl;
    for (int i = 0; i < size3; ++i) {
        std::cout << arr3[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

