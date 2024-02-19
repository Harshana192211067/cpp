#include <iostream>

using namespace std;

int main() {
    try
	{
        int x;
        cout << "Enter a positive integer: ";
        cin >> x;

        if (x < 0) {
            throw "The number is not positive";
        }
        if (x < 1) {
            throw "The number is too small";
        }
        if (x > 100) {
            throw "The number is too large";
        }

        cout << "Input is valid: " << x << endl;
    } 
    catch (const char* msg) {
        cerr << "Error: " << msg << endl;
    } 
   

    return 0;
}

