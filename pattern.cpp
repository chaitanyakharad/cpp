#include<iostream>
using namespace std;
int main()
{
    int n=5,i;
    char ch='A';

    // outer loop to print all rows 
    for( i=1;i<=n;i++)
    {
    //innner loop to print alphabet in each row
    for(int j=1;j<=i;j++)
    {
        cout<<ch<<" ";
        ch++;
    }
    cout<<endl;
}
return 0;


}