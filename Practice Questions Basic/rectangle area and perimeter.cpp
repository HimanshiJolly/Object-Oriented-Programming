/*Write a C++ program to create a class called Rectangle that has private member variables for length and width. Implement member functions to calculate the rectangle's area and perimeter.*/
#include<iostream>
using namespace std;
class Rectangle{
 private:
 int len;
 int bre;
 public:
 Rectangle(int l,int b)
 {
    len=l;
    bre=b;
 }
 int area()
 {
    return len*bre;
 }
 int perimeter()
 {
    return 2*(len+bre);
 }
};
int main()
{
    int le;
    int br;
    cout<<"Enter length:"<<endl;
    cin>>le;
    cout<<"Enter breadth:"<<endl;
    cin>>br;
    Rectangle r1(le,br);
    cout<<"Area:"<<r1.area()<<endl;
    cout<<"Perimeter:"<<r1.perimeter()<<endl;
    return 0;
}  