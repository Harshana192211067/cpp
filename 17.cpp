#include<iostream>
using namespace std;
int main()
{
	int m,n,arr[100],num,i,j,c;
	cout<<"enter number of elements: ";
	cin>>num;
	for(i=0;i<num;i++)
	{
		cin>>arr[i];
	}
	
	//sorting in ascending order
    for(i=0; i<num; i++)
    {
        for(j=i+1; j<num; j++) 				
		{ 
		if(arr[i]>arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout<<"\nArray in ascending order: ";
   
    for(i=0; i<num; i++){
      cout<<arr[i]<<" ";  }   
    cout<<"\n";
	cin>>m>>n;
	c = num-m;
	cout<<"\n mth largest is "<<arr[c];
	int secmin=arr[n-1];
	cout<<"\nnth smallest is: "<<secmin;
	
	//difference & sum
	cout<<"\n difference is : "<<arr[c]-arr[n-1];
	
	cout<<"\n sum is : "<<arr[c]+arr[n-1];
}
