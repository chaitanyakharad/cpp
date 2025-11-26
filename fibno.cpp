#include<iostream>
using namespace std;

int main()
{
int n,t1=0,t2=1,t3=0;

cout<<"enter the number of term";
cin>>n;

cout<<t1<<",";
cout<<t2<<",";

for(int i=2;i<=n;i++)
{
t3=t1+t2;
t1=t2;
t2=t3;

cout<<t3<<",";
}
}