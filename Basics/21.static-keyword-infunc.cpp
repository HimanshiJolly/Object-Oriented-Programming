#include<iostream>
#include<string>
using namespace std;
void enjoy()//without static keyword
{
	int x=0;
	cout<<"Without static keyword x="<<x<<endl;
	x++;
}
void enjoys()//with static keyword
{
	static int x=0;//1 time run
	cout<<"with static keyword x="<<x<<endl;
	x++;
}
int main()
{
	enjoy();
	enjoy();
	enjoy();
	enjoys();
	enjoys();
	enjoys();
	return 0;
}
