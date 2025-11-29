#include<iostream>
#include<string>
using namespace std;
class static_class
{
    static string teacher ;
    int rno;
    string name;

    public:
    void accept()
    {
        cout<<"\nEnter roll no & name ";
        cin>>rno>>name;

    }
    void display()
    {
        cout<<"\nroll number= "<<rno;
        cout<<"\nname= "<<name;
        cout<<"\nteacher= "<<teacher;

    }
};
    string static_class             :: teacher="bhagyashri\n";

int main()
{
    static_class s1,s2,s3;
    s1.accept();
    s1.display();
    s2.accept();
    s2.display();
    s3.accept();
    s3.display();
}