#include<iostream>
using namespace std;
inline int increment(int n)
{
    return ++n;
}
inline int decrement(int n)
{
    return --n;
}
int main()
{
    int n;
    cout<<"Enter the integer number ";
    cin>>n;
    
    cout<<" before no is "<<n<<endl;
    int incre=increment(n);
    cout<<" increment number is "<<incre<<endl;

    int decre=decrement(n);
    cout<<" decrement number is "<<decre<<endl;
    return 0;
}