#include <iostream>

class Rectangle {
private:
    int length;
    int breadth;

public:
    // Constructors
    Rectangle() : length(0), breadth(0) {}
    Rectangle(int l, int b) : length(l), breadth(b) {}
    Rectangle(int side) : length(side), breadth(side) {}

    // Function to calculate area
    int area() {
        return length * breadth;
    }
};

int main() {
    // Test Cases
    Rectangle rect1; // No parameters
    Rectangle rect2(3); // One parameter
    Rectangle rect3(3, 3); // Two parameters

    // Print areas
    std::cout << "Area: " << rect1.area() << std::endl;
    std::cout << "Area: " << rect2.area() << std::endl;
    std::cout << "Area: " << rect3.area() << std::endl;

    return 0;
}

