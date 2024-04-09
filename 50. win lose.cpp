#include <iostream>

int footballPoints(int wins, int draws, int losses) {
    // Calculate total points
    int totalPoints = (wins * 3) + (draws * 1) + (losses * 0);
    return totalPoints;
}

int main() {
    int wins, draws, losses;

    // Input from the user
    std::cout << "Enter the number of wins: ";
    std::cin >> wins;
    std::cout << "Enter the number of draws: ";
    std::cin >> draws;
    std::cout << "Enter the number of losses: ";
    std::cin >> losses;

    // Calculate and print total points
    int totalPoints = footballPoints(wins, draws, losses);
    std::cout << "Total points: " << totalPoints << std::endl;

    return 0;
}

