// write a cpp program create class and obj and display 
#include<iostream>
using namespace std;
class myClass
{
    public:
    int myNum;
    string myString;

};
    int main()
    {
        myClass obj;
        // Access atributes
        obj. myNum=15;
        obj.myString="I like cpp";
        
        // print atributes
        cout<<obj.myNum<<"\n";
        cout<<obj.myString;
        return 0;
        }