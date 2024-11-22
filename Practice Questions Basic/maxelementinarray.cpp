#include<iostream>
using namespace std;
int maxelement(int arr[],int n)
{
	int max=arr[0];
	for(int i=0;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	return max;
}
int main()
{
	int n;
	cout<<"Size of array:"<<endl;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"max element in the array is:"<<maxelement(arr,n)<<endl;
}
