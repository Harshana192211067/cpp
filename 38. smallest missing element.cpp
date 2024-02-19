#include <iostream>
using namespace std;

int findFirstMissing(int array[], int start, int end) {
    if (start > end)
        return end + 1;

    if (start != array[start])
        return start;

    int mid = (start + end) / 2;

    if (array[mid] > mid)
        return findFirstMissing(array, start, mid);

    return findFirstMissing(array, mid + 1, end);
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " sorted elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << "Smallest missing element is " << findFirstMissing(arr, 0, n - 1) << endl;

    return 0;
}

