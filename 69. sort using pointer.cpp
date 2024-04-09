#include <iostream>
// Function to swap two elements
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to sort the array using pointers
void sortArray(int *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1))
                swap(arr + j, arr + j + 1);
        }
    }
}

void printArray(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        std::cout << *(arr + i) << std::endl;
    }
}

int main() {
    int n;
    std::cout << "Input the number of elements to store in the array: ";
    std::cin >> n;
    int arr[n];
    std::cout << "Input " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
    sortArray(arr, n);
    std::cout << "Sorted array:" << std::endl;
    printArray(arr, n);

}

