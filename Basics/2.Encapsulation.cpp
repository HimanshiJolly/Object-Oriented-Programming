#include<iostream>
#include<string>
using namespace std;
class Accounts{
    private:
    double balance;
    string password;//data hiding
    public:
    string accountID;
    string username;
    //setterfunction
    void bal(double b,string p)
    {
        balance=b;
        password=p;
    }
    //getter function
    double get()
    {
        return balance;
    }
    string pass()
    {
        return password;
    }
};
int main()
{
    Accounts user1;
    user1.accountID="A3872508D54f";
    user1.username="Ishika";
    user1.bal(67000,"12qw34er");
    cout<<"User-details"<<endl;
    cout<<"AccountID:"<<user1.accountID<<endl;
    cout<<"Username:"<<user1.username<<endl;
    cout<<"Balance:"<<user1.get()<<endl;
    cout<<"Password:"<<user1.pass()<<endl;
    return 0;
}
