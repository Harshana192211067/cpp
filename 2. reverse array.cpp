#include <iostream>
void Reverse(int A[], int n) 
{
    int start = 0;
    int end = n - 1;
    while (start < end)
	// Swap elements at start and end indices
        int temp = A[start];
        A[start] = A[end];
        A[end] = temp;
        // Move indices towards the center
        start++;
        end--;
    }
}
int main() 
{
    int arr[100]; // Declare an integer array
    int size;        // Size of the array

    // Input the size of the array
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    // Input array elements
    std::cout << "Enter " << size << " elements:" << std::endl;
    for (int i = 0; i < size; ++i) 
	{
        std::cin >> arr[i];
    }

    Reverse(arr, size);

    // Output the reversed array
    std::cout << "Reversed array:" << std::endl;
    for (int i = 0; i < size; ++i) 
	{
        std::cout << arr[i] << " ";
    }

}
