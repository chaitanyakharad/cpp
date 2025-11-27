#include<iostream>
using namespace std;
class inlineclass
{
    public:
    int add(int a,int b);
};
inline int inlineclass::add(int a,int b)
{
    return a+b;
}
int main()
{
    inlineclass a;
    cout<<a.add(5,4);
    return 0;
}