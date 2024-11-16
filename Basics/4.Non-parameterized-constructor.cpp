#include<iostream>
#include<string>
using namespace std;
class Teacher{
	public:
		Teacher()//non parametrized constructor
		{
			cout<<"Hi I am your new teacher"<<endl;
			subject="Computer Science";
		}
		string name;
		int age;
		string subject;
		int yoe;
		void setsal(int s)
	{
		sal=s;
	}
	int getsal()
	{
		return sal;
	}		
	private:
	 int sal;
};
int main()
{
	Teacher t1;
	t1.name="Shardha";
	t1.age=26;
	t1.yoe=2;
	t1.setsal(30000);
	cout<<"\nteacher1 details:"<<endl;
	cout<<"\nName:"<<t1.name<<endl;
	cout<<"Age:"<<t1.age<<endl;
	cout<<"Subject:"<<t1.subject<<endl;
	cout<<"yoe:"<<t1.yoe<<endl;
	cout<<"Salary:"<<t1.getsal()<<endl<<endl;
	Teacher t2;
	t2.name="Spardha";
	t2.age=28;
	t2.yoe=3;
	t2.setsal(80000);
	cout<<"\nteacher2 details:"<<endl;
	cout<<"\nName:"<<t2.name<<endl;
	cout<<"Age:"<<t2.age<<endl;
	cout<<"Subject:"<<t2.subject<<endl;
	cout<<"yoe:"<<t2.yoe<<endl;
	cout<<"Salary:"<<t2.getsal()<<endl;
	return 0;
}

