#include<iostream>
using namespace std;
class rectangle
{
    private :
    double l;
    double w;
    
    public:
    //function set dimensions of ractangle
    void setDiam(double len,double width)
    {
        l=len;
        w=width;
    }
    inline double areacal()
    {
        return l*w;
    }
    inline double parical()
    {
        return 2*(l+w);
    }

};
int main()
{
    rectangle v;
    double len,width;
    cout<<"Enter the length : ";
    cin>>len;

    cout<<"Enter the width : ";
    cin>>width;

    v.setDiam(len,width);
    v.areacal();
    v.parical();

    cout<<"Area of ractange : "<<v.areacal()<<endl;
    cout<<"Parimeter of ractange : "<<v.parical()<<endl;
    
    return 0;

}