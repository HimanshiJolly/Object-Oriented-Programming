#include<iostream>
#include<string>
using namespace std;
class ABC{
	public:
		ABC(){
			cout<<"constructor"<<endl;
		}
		~ABC(){
			cout<<"destructor"<<endl;
		}
};
int main()
{
	if(true){
	static ABC a1;}
	cout<<"End of main function."<<endl;
	return 0;
}
