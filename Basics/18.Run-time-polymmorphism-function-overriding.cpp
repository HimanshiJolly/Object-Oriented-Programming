#include<iostream>
#include<string>
using namespace std;
class Parent{
	public:
		void show()
		{
			cout<<"Parent class"<<endl;
		}
};
class Child:public Parent{
	public:
		void show()
		{
			cout<<"Child class"<<endl;
		}
};
int main()
{
	Child c1;
	Parent p1;
	p1.show();
	c1.show();
	return 0;
}
