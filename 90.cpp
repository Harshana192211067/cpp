#include <iostream>
using namespace std;

// Base class Rectangle
class Rectangle {
protected:
    int width;
    int height;

public:
    // Constructor
    Rectangle(int w, int h) : width(w), height(h) {}

    // Method to display width and height
    void display() {
        cout << width<<" "<<height<<endl;
    }
};

// Derived class RectangleArea from Rectangle
class RectangleArea : public Rectangle {
public:
    // Constructor using base class constructor
    RectangleArea() : Rectangle(0, 0) {}

    // Method to read input for width and height
    void read_input() {
        cin >> width >> height;
    }

    // Overloaded method to display area
    void display() const {
        cout << "Area: " << width * height << endl;
    }
};

int main() {
    RectangleArea r;
    r.read_input(); // Read width and height
    r.display();    // Display area
    r.Rectangle::display(); // Display width and height

}

