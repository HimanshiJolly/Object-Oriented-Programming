/*Write a C++ program to create a class called Triangle that has private member variables for the lengths of its three sides. Implement member functions to determine if the triangle is equilateral, isosceles, or scalene.*/
#include<iostream>
using namespace std;
class Triangle{
    private:
    int l1,l2,l3;
    public:
    Triangle(int l1,int l2,int l3)
    {
        this->l1=l1;
        this->l2=l2;
        this->l3=l3;
    }
    void check()
    {
        if((l1==l2)&&(l2==l3))
        {
            cout<<"Equilateral triangle"<<endl;
        }
        else if((l1==l2)||(l1==l3)||(l2==l3))
        {
            cout<<"Isosceles triangle"<<endl;
        }
        else{
            cout<<"Scalene triangle"<<endl;
        }
    }
};
int main()
{
    int l1,l2,l3;
    cout<<"Enter the length of 3 sides of triangle:"<<endl;
    cout<<"l1:";
    cin>>l1;
    cout<<"l2:";
    cin>>l2;
    cout<<"l3:";
    cin>>l3;
    Triangle r1(l1,l2,l3);
    r1.check();
    return 0;
}