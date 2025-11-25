#include<iostream>
using namespace std;
class employee2 
{
    int id;
    char name[37];

    public:
    void setdata();
    void getdata();
};
void employee2::setdata()
{
    cout<<"Enter id";
    cin>>id;

    cout<<"Enter name";
    cin>>name;
}
void employee2::getdata()
{
    cout<<"Employee id : "<<id<<endl;
    cout<<"Employee name : "<<name<<endl;
    cout<<endl;
}
int main()
{
    employee2 emp[30];
    int n,i;
    cout<<"Enter no of employee";
    cin>>n;
    //calling function set data
    for(i=0;i<n;i++)
    {
        emp[i].setdata();
    }
    cout<<"Employee data \n";
    //calling function get date
    for(i=0;i<n;i++)
    {
        emp[i].getdata();
    }
}