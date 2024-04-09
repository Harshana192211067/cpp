#include <iostream>
using namespace std;
class Point {
private:
    int x, y;

public:
    Point(int x, int y) : x(x), y(y) {}  // Constructor

    // Copy constructor
    Point(const Point &p) {
        x = p.x;
        y = p.y;
    }

    // Function to display the coordinates
    void display() {
        cout << "x = " << x << ", y = " << y <<endl;
    }
};

int main() {
    // Create object p1
    Point p1(10, 15);
    cout << "p1: ";
    p1.display();

    // Create object p2 using copy constructor
    Point p2 = p1;
    cout << "p2: ";
    p2.display();

    return 0;
}

