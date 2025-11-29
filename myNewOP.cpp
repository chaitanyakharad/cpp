//  pointer value print=*ptr and address print =ptr 
#include<iostream>
using namespace std;
int main(){
//declare pointer
    int *nptr;
    //Allocate memory
    nptr=new int(9);
    cout<<"Value"<<*nptr<<endl;
    
    cout<<"Addresss"<<nptr<<endl;
    return 0;

}