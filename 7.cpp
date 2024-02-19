#include <iostream>

bool hasPairWithSum(int arr[], int n, int targetSum) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (arr[i] + arr[j] == targetSum) {
                std::cout << "Yes (" << arr[i] << " + " << arr[j] << " = " << targetSum << ")" << std::endl;
                return true;
            }
        }
    }
    std::cout << "No" << std::endl;
    return false;
}

int main() {
    int n;
    std::cout << "Enter the size of the array: ";
    std::cin >> n;
    int arr[n];
    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    int targetSum;
    std::cout << "Enter the target sum: ";
    std::cin >> targetSum;

    hasPairWithSum(arr, n, targetSum);

    return 0;
}

