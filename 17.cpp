#include <iostream>
#include <algorithm>

int main() {
    int n;
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;

    int arr[n];
    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    int M, N;
    std::cout << "Enter the value of M: ";
    std::cin >> M;
    std::cout << "Enter the value of N: ";
    std::cin >> N;

    std::sort(arr, arr + n, std::greater<int>());

    std::cout << M << "st Maximum Number = " << arr[M - 1] << std::endl;

    std::sort(arr, arr + n);

    std::cout << N << "rd Minimum Number = " << arr[N - 1] << std::endl;

    int sum = arr[M - 1] + arr[N - 1];
    int diff = std::abs(arr[M - 1] - arr[N - 1]);

    std::cout << "Sum = " << sum << std::endl;
    std::cout << "Difference = " << diff << std::endl;

    return 0;
}

