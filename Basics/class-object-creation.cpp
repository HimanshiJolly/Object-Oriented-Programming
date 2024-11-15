#include <iostream>
#include <string>
using namespace std;


class Teacher{
//properties or attributes
private:
double salary;
public:
string name;
string department;
string subject;
//methods or member functions
//These functions are called member functions because they become members of classes
void changedept(string newdept)
{
    department=newdept;
}
//setter function
void setsalary(double s){
    salary=s;
}
//getter function
double getsalary(){
    return salary;
}};


class Student{
    public:
    string name;
    int rollno;
    int age; 
};


int main()
{
    //If we want to access properties for a object we need to use a dot operator.
    Teacher t1;//object created
    Student s1;

    t1.name="Sarika";
    t1.subject="C++";
    t1.department="Computer Science";
    t1.setsalary(50000);
    cout<<"Teacher Details"<<endl;
    cout<<"Name:"<<t1.name<<endl;
    cout<<"Subject:"<<t1.subject<<endl;
    cout<<"Department:"<<t1.department<<endl;
    cout<<"Salary:"<<t1.getsalary()<<endl;
    cout<<endl;
    
    s1.name="Sarika";
    s1.rollno=50;
    s1.age=19;
    cout<<"Student Details"<<endl;
    cout<<"Name:"<<s1.name<<endl;
    cout<<"RollNo.:"<<s1.rollno<<endl;
    cout<<"Age:"<<s1.age<<endl;
    return 0;
}