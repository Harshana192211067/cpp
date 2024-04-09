#include <iostream>

int EXTRA_ELE(int A[], int B[], int N) {
    int result = 0;

    // XOR all elements of both arrays
    for (int i = 0; i < N; ++i) {
        result ^= A[i];
        result ^= B[i];
    }

    return result;
}

int main() {
    int maxSize = 100;
    int A[maxSize], B[maxSize];
    int N;

    std::cout << "Enter the size of the arrays: ";
    std::cin >> N;

    std::cout << "Enter elements of array A: ";
    for (int i = 0; i < N; ++i) {
        std::cin >> A[i];
    }

    std::cout << "Enter elements of array B: ";
    for (int i = 0; i < N - 1; ++i) {
        std::cin >> B[i];
    }

    int extraElement = EXTRA_ELE(A, B, N);
    
    std::cout << "The extra element in array A is: " << extraElement << std::endl;

    return 0;
}

