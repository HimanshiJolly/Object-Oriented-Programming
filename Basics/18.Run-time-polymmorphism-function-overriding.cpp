#include<iostream>
#include<string>
using namespace std;
class Parent{
	public:
		show()
		{
			cout<<"Parent class"<<endl;
		}
};
class Child:public Parent{
	public:
		show()
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
