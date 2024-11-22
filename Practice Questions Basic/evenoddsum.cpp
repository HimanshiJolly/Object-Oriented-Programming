#include<iostream>
using namespace std;
int main()
{
    int sumeven=0;
    int oddsum=0;
    int absdiff;
    int n;
    cout<<"Enter the upper limit:";
    cin>>n;
    int i=1;
    while(i<=n)
    {
        if(i%2==0)
        {
            sumeven+=i;
        }
        else{
            oddsum+=i;
        }
        ++i;
    }
    if(oddsum>sumeven){
    absdiff=oddsum-sumeven;}
    else{
        absdiff=sumeven-oddsum;
    }
    cout<<"The sum of odd numbers is:"<<oddsum<<endl;
    cout<<"The sum of even numbers is:"<<sumeven<<endl;
    cout<<"Absolute diff:"<<absdiff<<endl;
    return 0;
}
