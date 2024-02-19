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
    void display() const {
        cout << width << " " << height << endl;
    }
};

// Derived class RectangleArea from Rectangle
class RectangleArea : public Rectangle {
public:
    // Constructor using base class constructor
    RectangleArea(int w, int h) : Rectangle(w, h) {}

    // Method to read input for width and height
    void read_input() {
        cin >> width >> height;
    }

    // Overloaded method to display area
    void display() const {
        cout << width * height << endl;
    }
};

int main() {
    RectangleArea r(0, 0);
    r.read_input(); // Read width and height
    r.display();    // Display area

    return 0;
}

