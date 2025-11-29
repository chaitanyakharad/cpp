// write a cpp program check the number prime or not
/* prime number is a divisible by 1 and this number */
#include<iostream>
using namespace std;
int main()
{
    int i,n,flag=0;
    cout<<"Enter a number";
    cin>>n;

    for(i=2;i<=n/2;i++)
    {
        if(n % i==0)
        flag=1;
    }
    if(flag==0)
    {
        cout<<"Number is prime";
    }
    else
    {
        cout<<"Number is not prime";
    }
}