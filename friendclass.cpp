#include<iostream>
using namespace std;
// forword declaration
class b;
class a{
    private:
    int n1;
    //friend class declaration 
    friend class b;
    public:
    //constructure to initialize n
    class a() : n1(10)
    {

    }
};