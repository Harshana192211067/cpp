#include <iostream>
#include <cmath>

class BinaryToOctal {
private:
    int binary;
    int octal;

public:
    // Constructor to convert binary to octal
    BinaryToOctal(int bine) : binary(bine) {
        int decimal = 0, i = 0;
        octal = 0;

        // Convert binary to decimal
        while (binary != 0) {
            int rem = binary % 10;
            decimal += rem * pow(2, i);
            ++i;
            binary /= 10;
        }

        i = 1;

        // Convert decimal to octal
        while (decimal != 0) {
            octal += (decimal % 8) * i;
            decimal /= 8;
            i *= 10;
        }
    }

    // Method to get octal number
    int getOctal() {
        return octal;
    }
};

int main() {
    int binaryNumber;
    
    std::cout << "Enter a binary number: ";
    std::cin >> binaryNumber;

    BinaryToOctal bto(binaryNumber);
    std::cout << "Octal equivalent: " << bto.getOctal() << std::endl;

    return 0;
}

