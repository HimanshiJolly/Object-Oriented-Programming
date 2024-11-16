#include<iostream>
#include<string>
using namespace std;
class Student
{
	public:
		//parameterized constructor
		Student(string n,int roll,int g,char sect)
		{
			cout<<"Student details:"<<endl;
			name=n;
			rollno=roll;
			grade=g;
			section=sect;
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
