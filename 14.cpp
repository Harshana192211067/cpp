#include <iostream>

void mergeArrays(int arr1[], int size1, int arr2[], int size2, int result[]) 
{
    int index = 0;

    // Copy elements from first array to result array
    for (int i = 0; i < size1; ++i) {
        result[index] = arr1[i];
        index++;
    }

    // Copy elements from second array to result array
    for (int i = 0; i < size2; ++i) {
        result[index] = arr2[i];
        index++;
    }
}  // Merge array

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
    mergeArrays(arr1, size1, arr2, size2, arr3);

    // Output merged array C
    std::cout << "Merged array in array C:" << std::endl;
    for (int i = 0; i < size3; ++i) {
        std::cout << arr3[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

