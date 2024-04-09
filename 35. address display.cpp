#include <iostream>

using namespace std;

int main() {
    int arr[] = {10, 20, 30};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Displaying address using arrays:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "&arr[" << i << "] = " << &arr[i] << endl;
    }

    cout << "\nDisplaying address using pointers:" << endl;
    int* ptr = arr;
    for (int i = 0; i < size; ++i) {
        cout << "ptr + " << i << " = " << ptr + i << endl;
    }

    return 0;
}

