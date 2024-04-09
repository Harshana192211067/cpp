#include <iostream>
#include <algorithm>

using namespace std;

// Function to find the index of x in the array
int findIndex(int arr[], int N, int x) {
    for (int i = 0; i < N; ++i) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1; // Element not found
}

// Function to swap elements at indices x and y in the array
void swapElements(int arr[], int x, int y) {
    int temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;
}

int main() {
    int N;
    cout << "Enter the length of the array: ";
    cin >> N;

    int arr[N];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    int Q;
    cout << "Enter the number of queries: ";
    cin >> Q;

    while (Q--) {
        int type;
        cout << "Enter query type (1, 2, or 3): ";
        cin >> type;

        if (type == 1) {
            reverse(arr, arr + N);
        } else if (type == 2) {
            int x;
            cout << "Enter the element to find: ";
            cin >> x;
            int index = findIndex(arr, N, x);
            if (index != -1) {
                cout << "Index of element " << x << " is: " << index << endl;
            } else {
                cout << "Element " << x << " not found in the array." << endl;
            }
        } else if (type == 3) {
            int x, y;
            cout << "Enter indices to swap: ";
            cin >> x >> y;
            swapElements(arr, x, y);
        } else {
            cout << "Invalid query type." << endl;
        }
    }

    return 0;
}

