// jwrite a c++ program find the sum of first n natural number should be positive
#include<iostream>
using namespace std;
int main()
{
    int n,i=1,sum=0;
    cout<<"Enter the positive number";
    cin>>n;

    while(i<=n)
    {
        sum+=i;
        i++;
    }
    cout<<"Sum is "<<sum;
    return 0;
}