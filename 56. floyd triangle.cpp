#include <iostream>
class FloydTriangle {
private:
    int rows;

public:
    // Constructor to initialize the number of rows
    FloydTriangle(int n) : rows(n) {
        std::cout << "Floyd's Triangle with " << rows << " rows:" << std::endl;
        printFloydsTriangle();
    }

    // Destructor
    ~FloydTriangle() {
        std::cout << "Destructor called. Memory released." << std::endl;
    }

private:
    // Function to print Floyd's Triangle
    void printFloydsTriangle() const {
        int count = 1;

        for (int i = 1; i <= rows; ++i) {
            for (int j = 1; j <= i; ++j) {
                std::cout << count << " ";
                ++count;
            }
            std::cout << std::endl;
        }
    }
};

int main() {
	int n;
	std::cin>>n;
    // Create an object of FloydTriangle with n rows
    FloydTriangle triangle(n);

    // The destructor will be automatically called when the object goes out of scope
    return 0;
}

