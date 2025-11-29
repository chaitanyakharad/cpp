// write a c++ program to accept n float numbers,store there in an array and print alternate element of an array. (use)
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of element";
    cin>>n;

    float *arr=new float[n];
     cout<<"Enter "<<n<<" float numbers "<<endl;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"alternate element ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }
    delete [] arr;
}
