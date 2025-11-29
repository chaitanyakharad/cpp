#include<iostream>
using namespace std;
int main()
{
    int n=6;
    for(int i=1;i<=n;i++)
    {
    //print space
    for(int j=1;j<=n-1;j++){
    cout<<" ";
    }
    //print stats
    for(int k=1;k<=i;k++){
    cout<<"*";
    }
    cout<<endl;

    }
    return 0;
}