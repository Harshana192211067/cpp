#include <iostream>

int main() {
    int start, end;
    
    // Input the range
    std::cout << "Enter the start of the range: ";
    std::cin >> start;
    std::cout << "Enter the end of the range: ";
    std::cin >> end;

    std::cout << "Prime numbers between " << start << " and " << end << " are: ";

    // Loop through the range
    for (int i = start; i <= end; ++i) {
        // Skip 0 and 1 as they are not prime
        if (i <= 1)
            continue;
        
        bool isPrime = true;
        
        // Check if i is prime
        for (int j = 2; j * j <= i; ++j) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }

        // If i is prime, print it
        if (isPrime)
            std::cout << i << " ";
    }

    std::cout << std::endl;

    return 0;
}

