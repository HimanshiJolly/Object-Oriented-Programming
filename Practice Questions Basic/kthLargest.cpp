#include<iostream>
using namespace std;
int kthLargest(int arr[],int size, int k)
{
	for(int i=0;i<size-1;i++)
	{
		for(int j=0;j<size-i-1;j++)
		{
			if(arr[j]<arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	return arr[k];
}
int main()
{
	int t;
	cout<<"testcase:";
	cin>>t;
	while(t--)
	{
		int k;
		cout<<"k:";
		cin>>k;
		int n;
		cout<<"elements:";
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		cout<<"Kth largest element is "<<kthLargest(arr,n,k);
	}
}
