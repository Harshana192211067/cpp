#include <iostream>

using namespace std;

// Function to find the square root using binary search
double squareRoot(int n) {
    if (n == 0 || n == 1)
        return n;

    double low = 0, high = n, ans;
    while (high - low > 0.000001) {
        double mid = (low + high) / 2;
        if (mid * mid < n) {
            low = mid;
        } else {
            high = mid;
        }
    }
    ans = (low + high) / 2;
    return ans;
}

// Function to find the cube root using binary search
double cubeRoot(int n) {
    double low = 0, high = n, ans;
    while (high - low > 0.000001) {
        double mid = (low + high) / 2;
        if (mid * mid * mid < n) {
            low = mid;
        } else {
            high = mid;
        }
    }
    ans = (low + high) / 2;
    return ans;
}

int main() {
    float1 squareInput, cubeInput;

    // Input for square root
    cout << "Square Root Input: ";
    cin >> squareInput;

    // Calculate and output square root
    cout << "Square root: " << squareRoot(squareInput) << endl;

    // Input for cube root
    cout << "Cube root Input: ";
    cin >> cubeInput;

    // Calculate and output cube root
    cout << "Cube root: " << cubeRoot(cubeInput) << endl;

    return 0;
}

