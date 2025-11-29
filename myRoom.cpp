#include<iostream>
using namespace std;
class myRoom
{
    public:
    int room_no;
    string name;
    string address;

};

int main()
{
     myRoom obj1;

    obj1.room_no=30;
    obj1.name="chaitanya";
    obj1.address="devtakli";

    cout<<obj1.room_no<<" "<<obj1.name<<" "<<obj1.address;
}