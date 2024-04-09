#include <iostream>

int animals(int chickens, int cows, int pigs) {
    // Calculate total legs for each species
    int totalChickensLegs = chickens * 2;
    int totalCowsLegs = cows * 4;
    int totalPigsLegs = pigs * 4;

    // Calculate total number of legs
    int totalLegs = totalChickensLegs + totalCowsLegs + totalPigsLegs;

    return totalLegs;
}

int main() {
    // Input from the user
    int chickens, cows, pigs;
    std::cout << "Enter the number of chickens: ";
    std::cin >> chickens;
    std::cout << "Enter the number of cows: ";
    std::cin >> cows;
    std::cout << "Enter the number of pigs: ";
    std::cin >> pigs;

    // Calculate total number of legs and output the result
    int totalLegs = animals(chickens, cows, pigs);
    std::cout << "Total number of legs: " << totalLegs << std::endl;

    return 0;
}

