#include<iostream>
using namespace std;
class employee1 
{
    int id;
    char name[30];
    public:
    
    void setdata(); //declaration of function
    void getdata(); //declaration of function

};
void employee1::setdata() // defining of function
{
    cout<<"Enter id";
    cin>>id;

    cout<<"Enter name";
    cin>>name;
}
void employee1::getdata()// defining of function
{
    cout<<"Employee id : "<<id<<endl;
    cout<<"Employee name : "<<name<<endl;
    cout<<endl;
}
int main ()
{
    employee1 e1;
    e1.setdata (); //calling
    e1.getdata (); //calling

    return 0;
}