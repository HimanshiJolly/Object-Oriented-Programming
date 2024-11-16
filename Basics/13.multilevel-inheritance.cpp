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
		int rollno;
};
class Gradstudent:public Student{
	public:
		string research;
};
int main()
{
	Gradstudent g1;
	g1.name="Bjarne";
	g1.rollno=13;
	g1.age=22;
	g1.research="quantum physics";
	cout<<"Name:"<<g1.name<<endl;
	cout<<"Age:"<<g1.age<<endl;
	cout<<"RollNo:"<<g1.rollno<<endl;
	cout<<"Research Area:"<<g1.research<<endl;
	return 0;
}
