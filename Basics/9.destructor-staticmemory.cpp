#include<iostream>
#include<string>
using namespace std;
class Student{
	public:
		string name;
		int cgpa;
		Student(string n,int c){
			name=n;
			cgpa=c;
		}
		void getinfo()
		{
			cout<<"Name:"<<name<<endl;
            cout<<"CGPA:"<<cgpa<<endl;
		}
		//destructor
		~Student()
		{
			cout<<"\nHello,I delete everything";
		}
		
};
int main()
{
	Student s1("Helina",8.6);
	s1.getinfo();
	return 0;
}
