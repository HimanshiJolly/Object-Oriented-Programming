/*Write a C++ program to implement a class called Date that has private member variables for day, month, and year. Include member functions to set and get these variables, as well as to validate if the date is valid.*/
#include<iostream>
#include<string>
using namespace std;
class Date
{
    private:
    int day;
    int month;
    int year;
    public:
    Date(int day,int month,int year)
    {
      this->day=day;
      this->month=month;
      this->year=year;
    }
    void set(int day,int month,int year)
    {
       this->day=day;
       this->month=month;
       this->year=year;
    }
    int getday()
    {
        return day;
    }
    int getmonth()
    {
        return month;
    }
    int getyear()
    {
        return year;
    }
    bool valid() {
        if(month<1 || month>=12)
        return false;
        if(day<1 || day>31)
        return false;
        if((month==4||month==6||month==9||month==11)&&day>30)
        return false;
        if(month==2)
        {
            if((year%4==0 && year%100!=0)||(year%4==0))
            {
                if(day>29)
                return false;}
                else{
                    if(day>28)
                    return false;
                }
            }
            return true;}
    
};
int main()
{
    int day,month,year;
    cout<<"day:";
    cin>>day;
    cout<<"month:";
    cin>>month;
    cout<<"year:";
    cin>>year;
    Date d1(day,month,year);
    d1.set(day,month,year);
    cout<<"Date:"<<d1.getday()<<"/"<<d1.getmonth()<<"/"<<d1.getyear()<<endl;
    if(d1.valid())
    cout<<"valid"<<endl;
    else
    cout<<"not valid";
    return 0;
}