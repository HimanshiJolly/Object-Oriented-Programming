#include<iostream>
using namespace std;
int main()
{
	int t;
	cout<<"testcases:";
	cin>>t;
	while(t--)
	{
		int n;
		cout<<"number of elements in a array:";
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		cout<<endl;
		int r;
		cout<<"rotation:";
		cin>>r;
		r=r%n;
		int newarr[n];
		for(int i=0;i<n;i++)
		{
		  newarr[i]=arr[(i+r)%n];
		}
		for(int i=0;i<n;i++)
		{
			cout<<" "<<newarr[i];
		}
		cout<<endl;
	}
	return 0;
}
