#include <iostream>

int main() {
    int num1, num2, num3;

    // Input three numbers
    std::cout << "Enter three numbers: ";
    std::cin >> num1 >> num2 >> num3;

    // Pointers to the numbers
    int *ptr1 = &num1, *ptr2 = &num2, *ptr3 = &num3;

    // Find the greatest among three numbers
    int *maxPtr = (num1 > num2) ? ((num1 > num3) ? &num1 : &num3) : ((num2 > num3) ? &num2 : &num3);

    // Find the smallest among three numbers
    int *minPtr = (num1 < num2) ? ((num1 < num3) ? &num1 : &num3) : ((num2 < num3) ? &num2 : &num3);

    // Output the results
    std::cout << "Greatest number: " << *maxPtr << std::endl;
    std::cout << "Smallest number: " << *minPtr << std::endl;

    return 0;
}

