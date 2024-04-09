#include <iostream>

// Function to calculate factorial of a number
int factorial(int n) {
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += factorial(i) / i;
    }

    std::cout << "Sum of the series: " << sum << std::endl;

    return 0;
}

