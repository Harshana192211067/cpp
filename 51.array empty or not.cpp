#include <iostream>

bool isEmpty( int arr[], int size) {
    return size == 0;
}

int main() {
    // Test cases
    int emptyArray[] = {};
    int nonEmptyArray[] = {1, 2, 3};
    
    // Calculate the size of arrays
    int sizeEmptyArray = sizeof(emptyArray) / sizeof(emptyArray[0]);
    int sizeNonEmptyArray = sizeof(nonEmptyArray) / sizeof(nonEmptyArray[0]);

    // Check if arrays are empty
    std::cout << "isEmpty({}): " << (isEmpty(emptyArray, sizeEmptyArray) ? "true" : "false") << std::endl;
    std::cout << "isEmpty({1, 2, 3}): " << (isEmpty(nonEmptyArray, sizeNonEmptyArray) ? "true" : "false") << std::endl;

    return 0;
}

