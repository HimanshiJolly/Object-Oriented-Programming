#include<iostream>
#include<string>
using namespace std;
class Person{//parent class
	public:
		string name;
		int age;
		~Person(){
			cout<<"Parent class destructor called"<<endl;
		}
};
class Student:public Person{//childclass
	public:
	int rollno;
	~Student(){
		cout<<"Child class destructor called"<<endl;
	}
	void getinfo(){
		cout<<"Name:"<<name<<endl;
		cout<<"Age:"<<age<<endl;
		cout<<"rollno:"<<rollno<<endl;
	}
};
int main()
{ Student s1;
    s1.name="Insia";
    s1.age=18;
    s1.rollno=37;
    s1.getinfo();
	return 0;
}
