#include<iostream>
#include<string>
using namespace std;
class Teacher{
public:
Teacher()//constructor
{
    cout<<"Hey!I am your new teacher here are my details.\n";
}
string name;
int age;
string dept;
int yoe;
};
int main()
{
    Teacher t1;
    t1.name="Deepti";
    t1.age=28;
    t1.dept="Civil";
    t1.yoe=3;
    cout<<"Name:"<<t1.name<<endl;
    cout<<"Age:"<<t1.age<<endl;
    cout<<"Department:"<<t1.dept<<endl;
    cout<<"Years of Experience:"<<t1.yoe<<endl;
    return 0;
}