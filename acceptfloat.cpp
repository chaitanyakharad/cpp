// write a c++ program to accept 'n' float numbers , store them in an array and print the alternate element of an array.(use dynamic memrory allocation).
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter limit ";
    cin>>n;

    // dynamic memory allocation
    float *a=new float[n];
    //accept elements
    cout<<"Enter elements ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    // display elements
    cout<<"alternate elements of an array ";
    for(int i=0;i<n;i+=2)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    // deallocation memory
    delete[] a;
}