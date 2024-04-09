#include <iostream>

void zigzagArrange(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        if (i % 2 == 0) {  // Even index, element should be less than previous
            if (arr[i] > arr[i - 1]) {
                int temp = arr[i];
                arr[i] = arr[i - 1];
                arr[i - 1] = temp;
            }
        } else {  // Odd index, element should be greater than previous
            if (arr[i] < arr[i - 1]) {
                int temp = arr[i];
                arr[i] = arr[i - 1];
                arr[i - 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    std::cout << "Enter the size of the array: ";
    std::cin >> n;

    int arr[n];
    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    zigzagArrange(arr, n);

    std::cout << "Output: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

