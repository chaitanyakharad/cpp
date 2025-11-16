#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int d,cube,sum,num,n;
    cout<<"enter the number";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        num=i;
        sum=0;

        while(num>0)
        {
            d=num%10;
            cube=d*d*d;
            sum=sum+cube;
            num=num/10;
        }
        if(i==sum)
        {
            cout<<"armstrong no is "<<i<<endl;
        }
    }
    return 0;
}