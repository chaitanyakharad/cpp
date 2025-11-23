#include<iostream>
using namespace std;
class emp
{
private:
    int salary=20000;
public:
void setSalary(int s)
{
    salary=s;
}
int getsalary()
{
    return salary;
}
};
    int main()
    {
        emp e1;
        e1.setSalary(50000);
        cout<<e1.getsalary();
        return 0;
    }