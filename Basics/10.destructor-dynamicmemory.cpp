#include<iostream>
#include<string>
using namespace std;
class Teacher{
	public:
	string name;
	double* cgpaptr;
	Teacher(string name,double cgpa)
	{
		this->name=name;
		cgpaptr=new double;
		*cgpaptr=cgpa;
	}
	~Teacher()
	{
		cout<<"I delete everything"<<endl;
		delete cgpaptr;//delete keyword is used to deallocate dynamic memory
	}
	void getinfo()
	{
		cout<<"Name:"<<name<<endl;
		cout<<"CGPA:"<<*cgpaptr<<endl;
	}
};
int main()
{
	Teacher t1("Sarika",9.1);
	t1.getinfo();
	return 0;
}
