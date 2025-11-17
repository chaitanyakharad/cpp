// program is correct is a all digit sum and cube is equal
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int d,cube,sum=0,num,n;
    
    cout<<"Enter the number";
    cin>>num;
    n=num;

    while(num>0) 
    {
        d=num%10;
        cube =d*d*d;
        sum=sum+cube;
        num=num/10;
    }
    if(sum==n)
    {
    cout<<"number is armstrong";
    }
    else
    {
    cout<<"number is not armstrong";
    }
    return 0;
}
