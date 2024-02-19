#include <iostream>

int minCoins(int coins[], int n, int total) {
    if (total == 0) 
	return 0;
    int result = INT_MAX;
    for (int i = 0; i < n; ++i) {
        if (coins[i] <= total) {
            int sub_res = minCoins(coins, n, total - coins[i]);
            if (sub_res != INT_MAX && sub_res + 1 < result) {
                result = sub_res + 1;
            }
        }
    }
    return result;
}

int main() {
    int coins1[] = {10, 25, 5}; // coins
    int total1 = 30;             // total
    std::cout << "For coins {10, 25, 5} and total " << total1 << ", minimum coins required: "
              << minCoins(coins1, 3, total1) << std::endl;

    int coins2[] = {1, 9, 6, 5}; // coins
    int total2 = 13;              // total
    std::cout << "For coins {1, 9, 6, 5} and total " << total2 << ", minimum coins required: "
              << minCoins(coins2, 4, total2) << std::endl;

    return 0;
}

