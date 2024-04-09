//Write a C++ program that reads an integer and print the least\nsignificant digit and the next least significant digit.
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int rem=n%10;
	cout<<"least significant digit "<<rem<<endl;
	n=n/10;
	int rem1=n%10;
	cout<<"next least significant digit "<<rem1<<endl;
	
}
