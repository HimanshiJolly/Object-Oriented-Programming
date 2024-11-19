/*Write a C++ program to create a class called Person that has private member variables for name, age and country. Implement member functions to set and get the values of these variables.*/
#include<iostream>
#include<string>
using namespace std;
class Person{
    private:
 string name;
 int age;
 string country;
 public:
 Person(string n,int a,string c)
 {
    name=n;
    age=a;
    country=c;
 }
 void display()
 {
    cout<<endl<<"Dislaying person's details:"<<endl;
    cout<<"Name:"<<name<<endl;
    cout<<"Age:"<<age<<endl;
    cout<<"Country:"<<country<<endl;
 }
};
int main()
{
	string name;
	int age;
	string country;
	cout<<"Name:";
	cin>>name;
	cout<<"Age:";
	cin>>age;
	cout<<"Country:";
	cin>>country;
    Person p1(name,age,country);
    p1.display();
    return 0;
}