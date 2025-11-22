//dynamic constructor  ex. array(int s),memory allocation
#include<iostream>
using namespace std;
class array{
int s,*p;

public:
array(int s)
{
    this ->s=s;
    p=new int [s];
}
void accept()
{
    cout<<"Enter elements : ";
    for(int i=0;i<s;i++)
    {
        cin>>p[i];
    }
}
void display()
{
    cout<<"Array elements : ";
    for(int i=0;i<s;i++)
    cout<<p[i]<<" ";
}
};
int main()
{
    int n;
    cout<<"Enter the limit : ";
    cin>>n;
    array a(n);//call dynamic constructor
    a.accept();
    a.display();
}