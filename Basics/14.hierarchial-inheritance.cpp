#include<iostream>
#include<string>
using namespace std;
class Person{
	public:
		string name;
		int age;
};
class Student:public Person{
	public:
		int roll;
};
class Teacher:public Person{
	public:
		string subject;
};
int main()
{
	Student s1;
	s1.name="Student";
	s1.age=13;
	s1.roll=37;
	cout<<"Name:"<<s1.name<<endl;
	cout<<"RollNo:"<<s1.roll<<endl;
	cout<<"Age:"<<s1.age<<endl; 
	Teacher t1;
	t1.name="teacher";
	t1.age=25;
	t1.subject="Embedded system";
	cout<<"Name:"<<t1.name<<endl;
	cout<<"Age:"<<t1.age<<endl;
	cout<<"Subject:"<<t1.subject<<endl;
}
