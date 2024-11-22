/*Design a C++ program using inheritance to simulate a hotel room booking system. The Hotel class acts as the base class and Room as the derived class. The program should allow users to:
1.	Book a room.
2.	Check room availability.
3.	Display the customer's bill after their stay.
The system should keep track of room availability, accept customer details, and calculate the total bill based on the number of nights stayed and room type.
Input Format:
1.	Customer's name.
2.	Room type (Single, Double, Suite).
3.	Number of nights stayed.
Output Format:
1.	Confirmation of room booking.
2.	Room availability status.
3.	Total bill after the stay.
Coding Constraints:
1.	Assume the hotel has 5 Single rooms, 5 Double rooms, and 3 Suites.
2.	Room rates are as follows:
o	Single: ₹2000 per night.
o	Double: ₹3500 per night.
o	Suite: ₹5000 per night.
3.	Rooms can be booked only if available.
4.	Use constructors for initialization and destructors for cleanup.
5.	Encapsulate data appropriately.
*/
#include<iostream>
#include<string>
using namespace std;
class Hotel{
protected:
int singleroom=5;
int doubleroom=5;
int suiteroom=3;
public:
Hotel()
{
    cout<<"Welcome to the Hotel"<<endl;
}
bool isavailable(int roomtype)
{
    if(roomtype==1)return singleroom>0;
    if(roomtype==2)return doubleroom>0;
    if(roomtype==3)return suiteroom>0;
    return false;
}
void bookroom(int roomtype)
{
    if(roomtype==1)singleroom--;
    if(roomtype==2)doubleroom--;
    if(roomtype==3)suiteroom--;
}
~Hotel()
{
    cout<<"Thanks for using hotel booking system."<<endl;
}
};
class Room:public Hotel{
    private:
    string name;
    int roomtype;
    int night;
    public:
    Room(string n,int room,int nu)
    {
        name=n;
        roomtype=room;
        night=nu;
        if(isavailable(room))
        {
            bookroom(room);
            cout<<"Room booked successfully for"<<name<<endl;
        }
        else
        cout<<"Sorry,no rooms available for selected type."<<endl;
    }
    int bill()
    {
        int rate=0;
      if(roomtype==1)
      {
        rate=2000;
      }
      else if(roomtype==2)
      {
        rate=3500;
      }
      else if(roomtype==3)
      {
        rate=5000;
      }
      return rate*night;
    }
    void display(){
        cout<<"Room type:"<<(roomtype==1?"Single":roomtype==2?"Double":"Suite")<<endl;
        cout<<"Nights Stayed:"<<night<<endl;
        cout<<"Bill:"<<bill()<<endl;
    }
    ~Room()
        {
          cout<<"Booking for "<<name<<" is complete now "<<endl;  
        }
};
int main()
{
    string name;
    int type,nights;
    cout<<"Enter customer name:";
    getline(cin,name);
    cout<<"Enter 1 for single room,2 for double and 3 for suite:";
    cin>>type;
    cout<<"Enter number of nights:";
    cin>>nights;
    Room r1(name,type,nights);
    r1.display();
    return 0;
}