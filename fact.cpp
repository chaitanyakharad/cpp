//write a cpp program find fictorial number
/* 5 fictorial is 5*4*3*2*1 = 120  */
#include<iostream>
using namespace std;
int main()
{
    int fact=1,i,n;
    cout<<"Enter the number";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        fact=fact*n;
    }
    cout<<"factorial is "<<fact;
}