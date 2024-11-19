/*Write a C++ program to implement a class called Circle that has private member variables for radius. 
Include member functions to calculate the circle's area and circumference.*/
#include<iostream>
using namespace std;
class Circle{
    private:
    double r;
    public:
    Circle(double rad){
      r=rad;
    }
    double area()
    {
        return 3.14*r*r;
    }
    double circumference()
    {
       return 2*3.14*r;
    }
};
int main()
{
    double radius;
    cout<<"Enter radius:"<<endl;
    cin>>radius;
    Circle c1(radius);
    cout<<"Area of circle is:"<<c1.area()<<endl;
    cout<<"circumference of circle is:"<<c1.circumference()<<endl;
    return 0;
}