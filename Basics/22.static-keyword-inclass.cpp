#include<iostream>
#include<string>
using namespace std;

class A {
	public:
		static int x; // Static member variable declaration
		void incX()
		{
			x = x + 1;
		}
};

// Define static variable outside the class
int A::x;

int main()
{
	A a1;
	A a2;
	a1.x = 0; 
	a2.x = 20;
	cout << "X=" << a1.x << endl;
	a1.incX(); 
	cout << "X=" << a1.x << endl;
	cout << "X=" << a2.x << endl;
	a2.incX(); 
	cout << "X=" << a2.x << endl; 
	return 0;
}

