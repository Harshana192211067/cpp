#include <iostream>
#include <cstring>

class String 
{
private:
    char *str;

public:
    // Constructor
    String(const char *s) {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

    // Destructor
    ~String() {
        delete[] str;
    }

    // Overload == operator
    bool operator==(const String &other) const {
        return strcmp(str, other.str) == 0;
    }

    // Getter function to retrieve the string
    const char* getStr() const {
        return str;
    }
};

int main() {
    // Input two strings
    String str1("Apple");
    String str2("Orange");

    // Compare strings using the == operator
    if (str1 == str2) {
        std::cout << "both are equal" << std::endl;
    } else {
        std::cout << "both not equal" << std::endl;
    }

    return 0;
}

