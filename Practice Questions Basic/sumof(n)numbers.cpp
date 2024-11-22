#include<iostream>
using namespace std;
int main()
{
	int sum=0;
	int n;
	cout<<"number of elements:";
	int elements;
	cin>>n;
	while(n--)
	{
		cin>>elements;
		sum=sum+elements;
	}
	cout<<"Sum is:"<<sum<<endl;
	return 0;
}
