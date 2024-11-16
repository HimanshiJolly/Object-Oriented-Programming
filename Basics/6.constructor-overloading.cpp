#include<iostream>
#include<string>
using namespace std;
class Animal{
	public:
	string name;
	string sound;
	int age;
	Animal()
	{
		cout<<"hey I am from animal class 1"<<endl;
	}
	Animal(string n,string s)
	{
		cout<<"\nhey I am from animal class 2"<<endl;
		name=n;
		sound=s;
	}
    Animal(string n,string s,int a)
    {
    	cout<<"\nhey I am from animal class 3"<<endl;
    	name=n;
    	sound=s;
    	age=a;
	}
};
int main()
{
	Animal a1;
	a1.name="Class1 animal";
	cout<<"Name:"<<a1.name<<endl;
	Animal a2("Cat","meow-meow");
	cout<<"Name:"<<a2.name<<endl;
	cout<<"Sound:"<<a2.sound<<endl;
	Animal a3("Dog","Bark",10);
	cout<<"Name:"<<a3.name<<endl;
	cout<<"Sound:"<<a3.sound<<endl;
	cout<<"Age:"<<a3.age<<endl;
}
