// cpp program by use class function
#include<iostream>
using namespace std;
class myCar
{
    public:
    string brand;
    string  model;
    int year;
};
int main()
{
    // create an object of my car
    myCar obj1;
    obj1.brand="Mahindra";
    obj1.model="XUV300";
    obj1.year=2000;

    // create another object of my car
    myCar obj2;
    obj2. brand="Inova";
    obj2. model="Crysta";
    obj2. year=2010;

    // print the atributes
    cout<<obj1.brand<<" "<<obj1.model<<" "<<obj1.year<<endl;
    cout<<obj2.brand<<" "<<obj2.model<<" "<<obj2.year;

}