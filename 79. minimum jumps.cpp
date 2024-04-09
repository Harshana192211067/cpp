#include <iostream>

using namespace std;

int customMax(int a, int b) {
    return (a > b) ? a : b;
}

int minJumps(int arr[], int n) {
    if (n <= 1) 
	return 0;

    // If arr[0] is 0, then it is impossible to reach the end
    if (arr[0] == 0) 
	return -1;

    // Initialize variables to track the current position, max reach, and number of jumps
    int jumps = 1;
    int maxReach = arr[0];
    int steps = arr[0];

    for (int i = 1; i < n; i++) {
        // If current index exceeds the max reach, return -1
        if (i > maxReach) 
		return -1;

        // If we have reached the end, return the number of jumps
        if (i == n - 1) 
		return jumps;

        // Update max reach if the current index + its value is greater
        maxReach = customMax(maxReach, i + arr[i]);

        // Decrement steps as we move forward
        steps--;

        // If steps becomes 0, we need to take a jump
        if (steps == 0) {
            jumps++;

            // If we can't move further, return -1
            if (i >= maxReach) 
			return -1;

            // Update steps to be the difference between current index and max reach
            steps = maxReach - i;
        }
    }

    return -1; // We should never reach here
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Output: " << minJumps(arr, n) << endl;

}

