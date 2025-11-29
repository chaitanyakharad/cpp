// inside class function call without declaration 
#include<iostream>
using namespace std;
class myClass1 
{
    public:
    void myMethod()
    {
        cout<<"Chaitanya Kharad Patil"<<endl;
    }
}; // class close
int main()
{
    myClass1 c;
    c.myMethod (); // call method
}