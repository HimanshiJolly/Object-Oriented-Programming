/*Constructor and Destructor Create a class Circle with:

A constructor that initializes the radius.
A destructor that displays a message when the object is destroyed.
A member function to calculate and return the area of the circle.*/
#include<iostream>
using namespace std;
class Circle{
    public:
    int radius;
    Circle(int r)
    {
        radius=r;
    }
    ~Circle(){
        cout<<"object is destroyed ";
    }
    int area()
    {
        return 3.14*radius*radius;
    }
};
int main()
{
    int r;
    cout<<"Enter radius:";
    cin>>r;
    Circle c1(r);
    cout<<"area of circle is:"<<c1.area()<<endl;
    return 0;
}