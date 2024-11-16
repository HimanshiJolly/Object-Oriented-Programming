#include<iostream>
#include<string>
using namespace std;
class Person{//parent class
	public:
		string name;
		int age;
		Person(string name,int age){
			cout<<"Parent class constructor called"<<endl;
			this->name=name;
			this->age=age;
		}
};
class Student:public Person{//childclass
	public:
	int rollno;
	Student(string name,int age,int rollno):Person(name,age){
		cout<<"Child class constructor called"<<endl;
		this->rollno=rollno;
	}
	void getinfo(){
		cout<<"Name:"<<name<<endl;
		cout<<"Age:"<<age<<endl;
		cout<<"rollno:"<<rollno<<endl;
	}
};
int main()
{ Student s1("Rahul",18,27);
    s1.getinfo();
	return 0;
}
