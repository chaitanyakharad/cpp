#include<iostream>
using namespace std;
class empinside
{
    int id;
    char name[20];
    public:
    void setdata()
    {
        cout<<"Enter Employee Id";
        cin>>id;
        
        cout<<"Enter Name";
        cin>>name;
    }
    void getdata()
    {
        cout<<"Employee Id : "<<id<<endl;
        cout<<"Employee Name : "<<name<<endl;
        cout<<"\n";
    }
};
int main()
{
    empinside e[20];
    int n,i;
    cout<<"Enter the no of employee";
    cin>>n;
    for(i=0;i<n;i++)
    e[i].setdata();
    
    cout<<"\nEmployee data\n";
    for(i=0;i<n;i++)
    e[i].getdata();
    return 0;
}