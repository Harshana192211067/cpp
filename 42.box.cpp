#include <iostream>

class box {
public:
    // Public member variable
    int length;

    // Function to set the width
    void setWidth(int w) {
        width = w;
    }

    // Function to get the width
    int getWidth() {
        return width;
    }

    // Constructor to initialize length
    box(int l) {
        length = l;
    }

private:
    // Private member variable
    int width;
};

int main() {
    int l, w;
    std::cout << "Enter the Length of box: ";
    std::cin >> l;
    std::cout << "Enter the Width of box: ";
    std::cin >> w;

    // Create a box object
    box myBox(l);

    // Set the width using setWidth() function
    myBox.setWidth(w);

    // Display the length and width
    std::cout << "Length of box: " << myBox.length << std::endl;
    std::cout << "Width of box: " << myBox.getWidth() << std::endl;

    return 0;
}

