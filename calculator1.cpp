#include<iostream>
using namespace std;
int main()
{
    char op;
    int n1,n2;

    cout<<"Enter the operator : +,-,*,/ ";
    cin>>op;

    cout<<"Enter two operator";
    cin>>n1>>n2;

    

    switch (op)
    {
        case '+' : cout<<n1<<"+"<<n2<<"="<<n1+n2;
        break;

        case '-' : cout<<n1<<"-"<<n2<<"="<<n1-n2;
        break;

        case '*' : cout<<n1<<"*"<<n2<<"="<<n1*n2;
        break;

        case '/' : cout<<n1<<"/"<<n2<<"="<<n1/n2;
        break;

        default :
        cout<<"error";
        
    }
    return 0;
}