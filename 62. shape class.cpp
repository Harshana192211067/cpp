#include <iostream>

// Base class: Shape
class Shape {
public:
    void printInfo() const {
        std::cout << "This is a shape" << std::endl;
    }
};

// Subclass 1: Polygon (inherits from Shape)
class Polygon : public Shape {
public:
    // Function overrides the one in the base class
    void printInfo() const {
        std::cout << "Polygon is a shape" << std::endl;
    }
};

// Subclass 2: Rectangle (inherits from Polygon)
class Rectangle : public Polygon 
{
public:
    // Function overrides the one in the base class
    void printInfo() const 
	{
        std::cout << "Rectangle is a polygon" << std::endl;
    }
};

// Subclass 3: Triangle (inherits from Polygon)
class Triangle : public Polygon {
public:
    // Function overrides the one in the base class
    void printInfo() const {
        std::cout << "Triangle is a polygon" << std::endl;
    }
};

// Subclass 4: Square (inherits from Rectangle)
class Square : public Rectangle {
public:
    // Function overrides the one in the base class
    void printInfo() const {
        std::cout << "Square is a rectangle" << std::endl;
    }
};

int main() {
    Shape shapeObj;
    Polygon polygonObj;
    Rectangle rectangleObj;
    Triangle triangleObj;
    Square squareObj;

    std::cout << "Calling function by the object of each class:" << std::endl;

    shapeObj.printInfo();
    polygonObj.printInfo();
    rectangleObj.printInfo();
    triangleObj.printInfo();
    squareObj.printInfo();

    return 0;
}

