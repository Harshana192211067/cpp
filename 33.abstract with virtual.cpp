#include <iostream>

using namespace std;

// Abstract class Shape
class Shape {
public:
    // Pure virtual function to calculate area
    virtual double calculateArea() const = 0;
};

// Derived class Square
class Square : public Shape {
private:
    double length;
public:
    // Constructor
    Square(double _length) : length(_length) {}

    // Implementation of calculateArea for Square
    double calculateArea() const override {
        return length * length;
    }
};

// Derived class Circle
class Circle : public Shape {
private:
    double radius;
public:
    // Constructor
    Circle(double _radius) : radius(_radius) {}

    // Implementation of calculateArea for Circle
    double calculateArea() const override {
        return 3.14 * radius * radius;
    }
};

int main() {
    double radius, length;

    // Input for circle
    cout << "Enter radius of the circle: ";
    cin >> radius;

    // Input for square
    cout << "Enter the length of the square: ";
    cin >> length;

    // Creating pointers to Shape objects
    Shape* square = new Square(length);
    Shape* circle = new Circle(radius);

    // Calculating areas
    double areaSquare = square->calculateArea();
    double areaCircle = circle->calculateArea();

    // Output
    cout << "Area of square: " << areaSquare << endl;
    cout << "Area of circle: " << areaCircle << endl;

    // Freeing memory
    delete square;
    delete circle;

    return 0;
}

