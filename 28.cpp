#include <iostream>
#include <cmath>

class Triangle {
private:
    double side1, side2, side3;

public:
    // Constructor to initialize the sides of the triangle
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}

    // Function to calculate and print the area of the triangle
    void printArea() {
        // Calculate semi-perimeter
        double s = (side1 + side2 + side3) / 2;

        // Calculate area using Heron's formula
        double area = sqrt(s * (s - side1) * (s - side2) * (s - side3));

        std::cout << "Area of the triangle: " << area << " square units" << std::endl;
    }

    // Function to print the perimeter of the triangle
    void printPerimeter() {
        double perimeter = side1 + side2 + side3;
        std::cout << "Perimeter of the triangle: " << perimeter << " units" << std::endl;
    }
};

int main() {
    // Create an object of the Triangle class with sides 3, 4, and 5
    Triangle triangle(3, 4, 5);

    // Call member functions to print area and perimeter
    triangle.printArea();
    triangle.printPerimeter();

    return 0;
}

