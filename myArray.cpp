// array in cpp
#include<iostream>
using namespace std;
int main(){
//declare 
int *nptr;

//Allocate and initilize array with 5 elements
nptr=new int[5]{1,2,3,4,5};
for(int i = 0; i < 5; i++)
{
    cout<<nptr[i]<<"\t";
    
}

}