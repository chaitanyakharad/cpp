#include<iostream>
using namespace std;
class Mydate{
    int dd,mm,yyyy;
    public:
    Mydate(int d,int m,int y)
    {
        dd=d;
        mm=m;
        yyyy=y;
    }
    void display()
    {
        string mon[]={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
        if(mm>=1 && mm<=12)
        {
            cout<<dd<<"-"<<mon[mm-1]<<"-"<<yyyy;
        }
        else 
        cout<<"Invalid date ";
    }
};
int main()
{
    int d,m,y;
    cout<<"Enter the date ";
    cin>>d>>m>>y;
    Mydate n1(d,m,y);
    
    n1.display();
}