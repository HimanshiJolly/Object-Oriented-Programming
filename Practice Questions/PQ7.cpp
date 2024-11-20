/*Write a C++ program to implement a class called Employee that has private member variables for name, employee ID, and salary. Include member functions to calculate and set salary based on employee performance.*/
#include<iostream>
#include<string>
using namespace std;
class Employee{
    private:
  string name;
  int empid;
  int salary;
  public:
  Employee(string n,int id,int sal)
  {
    name=n;
    empid=id;
    salary=sal;
  }
  void cal(double per){
    if((per>0)&&(per<1.5))
    {
        salary=salary*per;
    }
    else{
        cout<<"salary remains unchanged"<<endl;
    }
    }
  void setsal(int sal){
    salary=sal;
  };
  string getName()const{
    return name;
  }
  int getempid() const{
    return empid;
  }
  int getsal() const
  {
    
    return salary;
  }
};
int main()
{
    string empname;
    int empid;
    int salary;
    cout<<"name:";
    cin>>empname;
    cout<<"Salary:";
    cin>>salary;
    cout<<"empid:";
    cin>>empid;
    Employee e1(empname,empid,salary);
    cout<<"initial salary:"<<e1.getsal()<<endl;
    double per;
    cout<<"Enter performance rating ";
    cin>>per;
    e1.cal(per);
    cout<<"updated salary: "<<e1.getsal();
    return 0;
}