/*Write a C++ program to implement a class called BankAccount that has private member variables for account number and balance. Include member functions to deposit and withdraw money from the account.*/
#include<iostream>
#include<string>
using namespace std;
class BankAccount{
private:
string acc;
double balance;
public:
BankAccount(string a,int b)
{
    acc=a;
    balance=b;
}
int deposit(int amount)
{
    balance=balance+amount;
    cout<<"Deposit successfully done .Balace:"<<balance<<endl;
    return balance;
}
int withdraw(int cash)
{
    if(balance>=cash){
    balance=balance-cash;
  cout<<"cash withdrawn successfully "<<balance<<endl;
  }
  else{
  cout<<"Insufficient balance"<<endl;}
  return balance;
}
};
int main()
{
   string accn;
   cout<<"Enter the account number:";
   cin>>accn;
   double bal=500,amount,cash;
   cout<<"Bank details"<<endl<<"A/C no:"<<accn<<endl<<"Avail balance:"<<bal<<endl;
   BankAccount B1(accn,bal);
   cout<<"Lets deposit some money"<<endl;
   
   cout<<"Deposit:";
   cin>>amount;
   B1.deposit(amount);
   cout<<"Lets withdraw some money"<<endl;
   cout<<"Withdraw amount:";
   
   cin>>cash;
   B1.withdraw(cash);
   cout<<"Lets withdraw some money again"<<endl;
   cout<<"Withdraw amount:";
   
   cin>>cash;
   B1.withdraw(cash);
    return 0;
}
