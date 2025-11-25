// write a cpp program check the number even or odd 
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number";
    cin>>n;
    
    if(n>=0) {
    
        cout<<"Number is positive"<<endl;
    
    if(n % 2==0) {
        cout<<"Number is even";
    }
    else
    {
       cout<<"Number is odd";
    }
    } else {
       cout<<"Number is negative";
           }
}