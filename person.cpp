// polimorphism program in cpp
#include<iostream>
using namespace std;
class person {
    public:
    //function overloding same function with different parameter 
    void showRole(string role) {
        cout<<"person is a "<<role<<endl;

    }
};
int main(){
    person p1;
    p1.showRole ("mother");
    p1.showRole("employee");
    return 0;
}