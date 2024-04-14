#include <iostream>

int minCoinsNeeded(int coins[], int n, int target) {
    int count = 0;
    for (int i = 0; i < n; ++i) {
        while (target >= coins[i]) {
            target -= coins[i];
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    std::cout << "Enter the total number of coins: ";
    std::cin >> n;

    int coins[n];
    std::cout << "Enter the values of the coins: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> coins[i];
    }

    int target;
    std::cout << "Enter the target amount: ";
    std::cin >> target;

    std::cout << "Minimum number of coins needed: " << minCoinsNeeded(coins, n, target) << std::endl;

    return 0;
}

