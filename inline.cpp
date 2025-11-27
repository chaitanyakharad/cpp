//  inline function
#include <iostream>
using namespace std;

inline int max(int a,int b)
{
    if(a>b)
    return a;
    else
    return b;
}
int main()
{
    cout<<"maximm : "<<max(4,8)<<endl;
}