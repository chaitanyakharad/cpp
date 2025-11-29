#include<iostream>
using namespace std;

int main()
{
int *nptr;

nptr=new int(19);
cout<<"value is "<<*nptr<<endl;
cout<<"address is "<<nptr<<endl;
}