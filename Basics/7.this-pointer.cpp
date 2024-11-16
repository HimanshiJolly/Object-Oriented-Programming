#include<iostream>
#include<string>
using namespace std;
class Student
{
	public:
		//parameterized constructor
		Student(string name,int rollno,int grade,char section)
		{
			cout<<"Student details:"<<endl;
			//object's property name=parameter
			this->name=name;
			this->rollno=rollno;
			this->grade=grade;
			this->section=section;
		}
		string name;
		int rollno;
		int grade;
		char section;
		void getinfo()
		{
		cout<<"Name:"<<name<<endl;
	cout<<"RollNo:"<<rollno<<endl;
	cout<<"Grade:"<<grade<<endl;
	cout<<"Section:"<<section<<endl;	
		}
};
int main()
{
	Student s1("Himanshi",31,12,'B');
	s1.getinfo();
	return 0;
}
