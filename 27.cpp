#include <iostream>

class Print {
public:
    // Function to print integer first, then character
    void display(int n, char c) {
        std::cout << "Integer: " << n << ", Character: " << c << std::endl;
    }

    // Function to print character first, then integer
    void display(char c, int n) {
        std::cout << "Character: " << c << ", Integer: " << n << std::endl;
    }
};

int main() {
    Print printer;

    printer.display(10, 'A'); 

    printer.display('B', 20); 

    return 0;
}

