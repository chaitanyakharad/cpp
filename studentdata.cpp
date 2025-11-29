#include<iostream>
using namespace std;
class student {
string s_name,cl;
int r_no;
static int cnt;

public:
void accept()
{
    cout<<"\nEnter Roll Number ";
    cin>>r_no;

    cin.ignore();
    cout<<"Enter student name ";
    getline(cin,s_name);
    cout<<"Enter class ";
    getline(cin,cl);
    cnt++; // student count
}
void display()
{
    cout<<"\n Roll Number : "<<r_no;
    cout<<"\n Student Name : "<<s_name;
    cout<<"\n Class : "<<cl;
}
static void dispcnt(){ // static member function
cout<<"\n\nTotal Student : "<<cnt;
}
};
int student :: cnt=0;
int main()
{
    int n,i;
    cout<<"Enter Limit ";
    cin>>n;
    student s[n]; // array of object 
    for(i=0;i<n;i++)
    {
        cout<<"Enter student details "<<endl;
        s[i].accept();
    }
    cout<<"Display student details ";
    for(i=0;i<n;i++)
    {
        cout<<"\n\nStudent details "<<i+1<<"\n";
        s[i].display();
    }
    student::dispcnt();

}
