/*Write a C++ program to implement a class called Student that has private member variables for name, class, roll number, and marks. Include member functions to calculate the grade based on the marks and display the student's information*/
#include<iostream>
#include<string>
using namespace std;
class Student{
    private:
    string name;
    string clas;
    int roll;
    int marks;
    public:
    Student(string n,string c,int r,int m)
    {
        name=n;
        clas=c;
        roll=r;
        marks=m;
    }
    string cal()
    {
        string grade;
        if(marks>=80)
        {
            grade="O";
        }
        else if(marks>=70)
        {
            grade="A+";
        }
        else
        {
            grade="A";
        }
        return grade;
    }
    void disp()
    {
        cout<<"name:"<<name<<endl;
        cout<<"class:"<<clas<<endl;
        cout<<"Roll No.:"<<roll<<endl;
        cout<<"marks:"<<marks<<endl;
        cout<<"Grade:"<<cal()<<endl;
    }
};
int main()
{
    string name;
    string clas;
    int roll;
    int marks;
    cout<<"name: ";
    getline(cin,name);
    cout<<"class: ";
    getline(cin,clas);
    cout<<"rollnumber: ";
    cin>>roll;
    cout<<"marks: ";
    cin>>marks;
    Student s1(name,clas,roll,marks);
    s1.disp();
    return 0;
}
