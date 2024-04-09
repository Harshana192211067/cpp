#include <iostream>

int AddEnd4(int A[][4], int R, int C) {
    int sum = 0;
    for (int i = 0; i < R; ++i) {
        for (int j = 0; j < C; ++j) {
            if (A[i][j] % 10 == 4) {
                sum += A[i][j];
            }
        }
    }
    return sum;
}

int main() {
    int R, C;
    std::cout << "Enter the number of rows: ";
    std::cin >> R;
    std::cout << "Enter the number of columns: ";
    std::cin >> C;

    int A[R][4]; 

    std::cout << "Enter the elements of the array:" << std::endl;
    for (int i = 0; i < R; ++i) {
        for (int j = 0; j < 4; ++j) {
            std::cout << "Enter element A[" << i << "][" << j << "]: ";
            std::cin >> A[i][j];
        }
    }

    int result = AddEnd4(A, R, 4); 
    std::cout << "Sum of elements ending with 4: " << result << std::endl;

    return 0;
}

