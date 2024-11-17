#include<iostream>
#include<string>
using namespace std;
class Parent{
	public:
		void show()
		{
			cout<<"Parent class"<<endl;
		}
		virtual void hello()
		{
			cout<<"Hello from parent class"<<endl;
		}
};
class Child:public Parent{
	public:
		void show()
		{
			cout<<"Child class"<<endl;
		}
		void hello()
		{
			cout<<"Hello from child class"<<endl;
		}
};
int main()
{
	Child c1;
	c1.hello();
	return 0;
}
