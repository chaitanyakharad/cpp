// write a cpp program to calculate following series 
//(1*1)+(2*2)+(3*3)+...+(n*n)
#include<iostream>
using namespace std;
int main()
{
    int n;
    long long sum=0;

    cout<<"enter the n value";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
    sum+=(long long) i*i;
    }
    cout<<"sum of the given series "<<sum;
    return 0;
}