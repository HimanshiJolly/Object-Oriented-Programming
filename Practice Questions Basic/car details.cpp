/*Write a C++ program to create a class called Car that has private member variables for company, model, and year. Implement member functions to get and set these variables*/
#include<iostream>
#include<string>
using namespace std;
class Car{
  private:
  string company;
  string model;
  int year;
  public:
  Car(string c,string m,int y)
  {
    company=c;
    model=m;
    year=y;
  }
  void display()
  {
    cout<<endl<<"Displaying car details"<<endl;
    cout<<"Company of car:"<<company<<endl;
    cout<<"Model of car:"<<model<<endl;
    cout<<"Year:"<<year<<endl;
  }
};
int main()
{
    string n;
    string m;
    int y;
    cout<<"name:";
    cin>>n;
    cout<<"Model:";
    cin>>m;
    cout<<"year:";
    cin>>y;
    Car c1(n,m,y);
    c1.display();
    return 0;
}