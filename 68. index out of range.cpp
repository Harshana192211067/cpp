#include <iostream>
#include <stdexcept>
using namespace std;
int main() {
    int size ;
    int arr[30];
    int index;
 	cout<<"Enter size: "<<endl;
    cin>>size;
    for(int i=0;i<size;i++)
    {
    	cin>>arr[i];
	}

    cout << "Enter an index to access the array: ";
    cin >> index;

    try {
        
        if (index < 0 || index >= size) {
            throw out_of_range("Index out of bounds");			// Check if index is out of bounds
        }

        // Access the array element
        cout << "Value at index " << index << ": " << arr[index] << endl;
    } catch (const out_of_range& e) {
        // Handle the out of bounds exception
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}

