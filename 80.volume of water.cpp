#include <iostream>

using namespace std;

int trapWater(int A[], int n) {
    if (n <= 2) return 0;

    int leftMax[n] = {0};
    int rightMax[n] = {0};

    // Populate leftMax array
    leftMax[0] = A[0];
    for (int i = 1; i < n; i++) {
        leftMax[i] = (A[i] > leftMax[i - 1]) ? A[i] : leftMax[i - 1];
    }

    // Populate rightMax array
    rightMax[n - 1] = A[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        rightMax[i] = (A[i] > rightMax[i + 1]) ? A[i] : rightMax[i + 1];
    }

    // Calculate trapped water at each position
    int totalWater = 0;
    for (int i = 0; i < n; i++) {
        int minHeight = (leftMax[i] < rightMax[i]) ? leftMax[i] : rightMax[i];
        totalWater += (minHeight - A[i] > 0) ? minHeight - A[i] : 0;
    }

    return totalWater;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int A[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    cout << "Total volume of trapped water: " << trapWater(A, n) << endl;

    return 0;
}

