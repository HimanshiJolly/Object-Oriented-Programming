#include<iostream>
using namespace std;
int main()
{
    int fact=1;
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    cout<<"Factorial of "<<n<<" is:"<<fact<<endl;
    return 0;
}