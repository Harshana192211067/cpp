#include <iostream>
using namespace std;

void decToBinary(int n)
{
	int binaryNum[32];

	int i = 0;
	while (n > 0) {

		binaryNum[i] = n % 2;
		n = n / 2;
		i++;
	}

	// Printing binary array in reverse order

	for (int j = i - 1; j >= 0; j--)
		cout << binaryNum[j];
}

// Driver code
int main()
{
	int n = 65;
	decToBinary(n);
	return 0;
}

