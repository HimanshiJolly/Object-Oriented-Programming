/*Write a program to create a class Person with the following attributes:
name (string)
age (integer)
Include a member function to display the person's details. Create an object and display the details.*/
#include<iostream>
#include<string>
using namespace std;
class Person{
public:
string name;
int age;
void disp()
{
    cout<<"Name:"<<name<<endl;
    cout<<"Age:"<<age<<endl;
}
};
int main()
{
    Person p1;
    p1.name="Insia";
    p1.age=20;
    p1.disp();
    return 0;
}