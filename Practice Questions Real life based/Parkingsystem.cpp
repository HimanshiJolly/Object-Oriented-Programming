/*Problem Title: 
Design a Parking System
Problem Statement:
You are required to design a ParkingSystem class for a parking lot that supports three types of cars: big, medium, and small. The system should track the available parking spots for each type and provide methods to park cars and check if there is space for a specific car type.
Input Format:
•	The class constructor receives three integers: the number of parking spots available for big, medium, and small cars respectively.
•	After initialization, for each car arriving, the system takes an integer input representing the type of the car:
o	1 for big car
o	2 for medium car
o	3 for small car
•	For each parking request, the system will either allocate the spot (if available) or reject it (if full).
Output Format:
•	After each car parking attempt, return true if parking was successful (i.e., a spot was available); otherwise, return false (i.e., no spot available).
Coding Constraints:
•	0 <= big, medium, small <= 1000
•	1 <= carType <= 3
•	Methods should allow parking as long as space for that type of car is available.
Test Cases:
Sample Input:
Parking system initialized: 1 1 0
Car Type: 1
Car Type: 2
Car Type: 3
Car Type: 1
Sample Output:
Parking Success: true
Parking Success: true
Parking Success: false
Parking Success: false
*/
#include<iostream>
using namespace std;
class ParkingSystem{
    private:
    int bigslot,medslot,smallslot;
    public:
    ParkingSystem(int big,int med,int small)
    {
        bigslot=big;
        medslot=med;
        smallslot=small;
    }
    bool park(int cartype)
    {
        if(cartype==1)//big car
        {
            if(bigslot>0)
            {
                bigslot--;
                return true;
            }
        }
        else if(cartype==2)//medium car
        {
            if(medslot>0)
            {
                medslot--;
                return true;
            }
        }
        else if(cartype==3)//small car
        {
            if(smallslot>0)
            {
                smallslot--;
                return true;
            }
        }
        return false;//no availability
    }
};
int main()
{
    int big,small,medium;
    cout<<"Parking system initialized(big,medium,small):";
    cin>>big>>medium>>small;
    ParkingSystem* parkingsystem=new ParkingSystem(big,medium,small);
    int cartype;
    char choice='y';
    while(choice=='y'){
        cout<<"carType:(1:big,2:medium,3:small)";
        cin>>cartype;
   if(parkingsystem->park(cartype)){
    cout<<"Parking success:true"<<endl;}
    else{
    cout<<"Parking success:false"<<endl;
    }
    cout<<"Do u want to park more?(y/n)"<<endl;
    cin>>choice;
   }
   delete parkingsystem;
   return 0;
}
