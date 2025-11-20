#include<iostream>
using namespace std;
void test(int &x, int y)// int &x = call by reference diret value refer hote and int y call by value fct copy hote
{
    x+=5;
    y*=4;
    cout<<"x = "<<x<<"  y = "<<y<<endl;
    
}
int main()
{
    int a=20,b=15;
    test(a,b);
    cout<<"a = "<<a<<"  b = "<<b;
}