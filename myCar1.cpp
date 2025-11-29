// outside methods 
#include <iostream>
using namespace std;
class myCar1
{
    public:
    int speed(int maxSpeed); //  declaration
};
int myCar1::speed (int maxSpeed)
{
    return maxSpeed;
}
int main()
{
    myCar1 c1;
    cout<<c1.speed (200); // call method
}
