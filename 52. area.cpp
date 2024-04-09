#include <iostream>

class Area {
public:
    // Function to calculate and print the area of a square
    void calculateArea(int side) {
        std::cout << "Area of square: " << (side * side) << std::endl;
    }

    // Function to calculate and print the area of a rectangle
    void calculateArea(int length, int breadth) {
        std::cout << "Area of rectangle: " << (length * breadth) << std::endl;
    }
};

int main() {
    int side, length, breadth;

    // Input for square side
    std::cout << "Enter side of square: ";
    std::cin >> side;

    // Input for rectangle length and breadth
    std::cout << "Enter length and breadth of rectangle (comma-separated): ";
    std::cin >> length;
    std::cin.ignore(); // Ignore the comma
    std::cin >> breadth;

    // Create an object of the Area class
    Area area;

    // Calculate and print the area of square and rectangle
    area.calculateArea(side); // For square
    area.calculateArea(length, breadth); // For rectangle

    return 0;
}

