#include <iostream>

int fibonacci(int n) {
    if (n <= 1)
        return n;
    int a = 0, b = 1;
    for (int i = 2; i <= n; ++i) {
        int next = a + b;
        a = b;
        b = next;
    }
    return b;
}

int main() {
    int n;
    std::cout << "Enter the value of N: ";
    std::cin >> n;
    std::cout << "The " << n << "th Fibonacci number is: " << fibonacci(n) << std::endl;
    return 0;
}

