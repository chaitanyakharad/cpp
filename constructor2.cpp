//copy constructor 
#include<iostream>
using namespace std;
class emp{
int eid;
string name;
double sal;

public:

emp(int eid,string name, float sal)
{
    this->eid=eid;
    this->name=name;
    this->sal=sal;
}
emp(const emp & e)//copy const
{
    eid=e.eid;
    name=e.name;
    sal=e.sal;
}
void display()
{
    cout<<eid<<" "<<name<<" "<<sal<<" "<<endl;
}
};
int main()
{
    emp e1(11,"chaitanya",50000);
    emp e2(12,"akshay",16000);

    e2.display();

    emp e3(e1);
    e3.display();
}