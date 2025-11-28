// write a c++ program  to modify contents of an integer array.(use call by reference)
#include<iostream>
using namespace std;
void modify(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
    a[i]=a[i]*2;
    }
    cout<<"\nModified Array ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
void accept(int a[],int n)
{
    cout<<"Enter array element ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
}
void display(int a[],int n)
{
    cout<<"Original array ";
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
}
int main()
{
    int a[20],n;
    cout<<"Enter limit ";
    cin>>n;
    accept(a,n);
    display(a,n);
    modify(a,n);
}