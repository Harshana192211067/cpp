#include <iostream>
#include <string>

class String {
private:
    std::string str; // Internal string representation

public:
    // Constructor
    String( std::string s) : str(s) {}

    // Overloading the == operator
    bool operator==( String other) const {
        return str == other.str;
    }

    // Getter function to access the string
    std::string getStr() {
        return str;
    }
};

int main() {
    // Input
    std::string first = "Apple";
    std::string second = "Orange";

    // Create String objects
    String str1(first);
    String str2(second);

    // Comparison
    if (str1 == str2) {
        std::cout << "both are equal" << std::endl;
    } else {
        std::cout << "both not equal" << std::endl;
    }

    return 0;
}

