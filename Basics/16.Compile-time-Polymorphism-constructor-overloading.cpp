#include<iostream>
#include<string>
using namespace std;
class Student{
	public:
		string name;
		Student(){
		cout<<"non-parameterized-constructor"<<endl;}
		Student(string name){
			this->name=name;
			cout<<"parameterized-constructor"<<endl;
		}
};
int main()
{
	Student s1;
	Student s2("Kartik");
	return 0;
}
