#include<iostream>
#include<string>
using namespace std;
class Student{
	public:
		int roll;
		string name;
};
class Teacher{
	public:
		string sub;
		double salary;
};
class TA :public Student,public Teacher{
	
};
int main()
{
	TA t1;
	t1.name="Sakshi";
	t1.roll=65;
	t1.sub="Modern Computational Physics";
	t1.salary=60000;
	cout<<"Name:"<<t1.name<<endl;
	cout<<"RollNo:"<<t1.roll<<endl;
	cout<<"Subject:"<<t1.sub<<endl;
	cout<<"Salary:"<<t1.salary<<endl;
	return 0;
}
