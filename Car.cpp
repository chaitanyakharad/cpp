#include<iostream>
using namespace std;
class Car{
    private:
   void engineStart(){
        cout<<"Engine Started"<<endl;

    }
    public:
    void startCar(){
engineStart();
cout<<"Car is ready to drive!"<<endl;
    }
    void accelerate()
    {
        cout<<"Car is accelerating"<<endl;
    }
    void brake(){
        cout<<"Car is slowing down"<<endl;
    }

};
int main(){
    Car c1;
    c1.startCar();
    c1.accelerate();
    c1.brake();
    return 0;
}