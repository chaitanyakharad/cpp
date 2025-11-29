/* write a cpp program create to a class mynumber with three data members of type integer create
and initialize the obj using default constructor , parametrise constructor and parametrize 
with default value. write a member function to display avg of given three no for all obj*/
#include<iostream>
using namespace std;
class Mynumber{
int a,b,c;
public:
Mynumber ()//default
{
    a=b=c=0;
}
/*Mynumber(int x,int y, int z)
{
    a=x;
    b=y;
    c=z;
}*/
Mynumber(int x,int y,int z=10)
{
    a=x;
    b=y;
    c=z;
}
void display()
{
    float avg =(a+b+c)/3;
    cout<<"Number "<<a<<" "<<b<<" "<<c<<" "<<"avarage "<<avg<<endl;
}
};
int main()
{
    Mynumber n1;
    n1.display();

    Mynumber n2(10,20,30);
    n2.display();

    Mynumber n3(50,60);
    n3.display();
    
}