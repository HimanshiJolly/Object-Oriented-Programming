#include<iostream>
#include<string>
using namespace std;
class Student{
	public:
		string name;
		double* cgpaptr;
		Student(string name,double cgpa)//parameterized constructor
		{
			this->name=name;
			cgpaptr=new double;
			*cgpaptr=cgpa;
		}
		void getinfo()
		{
			cout<<"NAME:"<<name<<endl;
			cout<<"CGPA:"<<*cgpaptr<<endl;
		}
		Student(Student &Obj)//custom constructor
		{
			this->name=Obj.name;
			cgpaptr=new double;
			*cgpaptr=*Obj.cgpaptr;
		}
};
int main()
{
	Student s1("Krishna",9.5);
	Student s2(s1);//custom constructor 
	*(s2.cgpaptr)=8.9;
	s1.getinfo();
	s2.name="Neha";
	s2.getinfo();
	return 0;
}
