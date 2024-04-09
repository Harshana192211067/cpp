#include<iostream>

int main() {
    const int maxSize = 100; // Assuming a maximum size for the array
    int arr[maxSize];
    int n;

    // Input the number of elements in the array
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    // Input the elements of the array
    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    // Perform the non-decreasing order sorting
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            // Swap elements if they are in the wrong order
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Display the sorted array
    std::cout << "Array in non-decreasing order: ";
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }

    return 0;
}

