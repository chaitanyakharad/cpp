// write a cpp program add two numbers using friend function
#include<iostream>
using namespace std;
class second;// forword declaration
class first{
    float a;
    public: 
    void accpet()
    {
        cout<<"Enter first number ";
        cin>>a;
    }
    friend void add(first,second); // friend function declaration

};
class second{
    float b;
    public:
    void accept()
    {
        cout<<"Enter second number ";
        cin>>b;
    }
    friend void add(first,second);
};
void add(first f,second s)// declaration
{
     cout<<"\nAddition is : "<<f.a+s.b;
}
int main()
{
    first f;
    second s;
    f.accpet();
    s.accept();
    add(f,s);// call friend function
}