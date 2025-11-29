
#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter the positive number";
    cin>>n;

    while(0<n)
    {
        sum+=n;
        n--;
    }
    cout<<"Sum is "<<sum;
    return 0;
}