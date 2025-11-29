// friend function 
#include<iostream>
using namespace std;
class student {
    string name = "bhagyashri";

    public: 
    friend void display(student s);
};
void display (student s){
    cout<<"student name "<<s.name;
}
int main()
{
student s;
display(s);

}
