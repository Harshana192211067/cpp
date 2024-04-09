#include <iostream>
using namespace std;
// Function to convert a character to uppercase
char toUpper(char c) {
    if (c >= 'a' && c <= 'z') {
        return c - 32; // ASCII difference between lowercase and uppercase letters
    }
    return c;
}

// Function to convert a character to lowercase
char toLower(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + 32; // ASCII difference between uppercase and lowercase letters
    }
    return c;
}

// Function to reverse a string
void reverseString(char str[]) {
    int length = 0;
  // Find the length of the string
  
    while (str[length] != '\0') 
	{
        length++;
    }

    // Swap characters from the beginning and end of the string until the midpoint
    for (int i = 0; i < length/ 2; ++i) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);

    // Convert to uppercase
    for (int i = 0; str[i] != '\0'; ++i) {
        str[i] = toUpper(str[i]);
    }
    cout << "Uppercase: " << str << endl;

    // Convert to lowercase
    for (int i = 0; str[i] != '\0'; ++i) {
        str[i] = toLower(str[i]);
    }
    cout << "Lowercase: " << str << endl;

    // Reverse the string
    reverseString(str);
	cout << "Reverse: " << str << endl;

}

