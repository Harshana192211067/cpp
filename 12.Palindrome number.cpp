#include <iostream>
using namespace std;
int main()
{
	int num,rem,rev=0;
	cin>>num;
	int num1=num;
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	if (rev==num1){
		cout<<"S";
	}
	else{
		cout<<"No";
	}
}
