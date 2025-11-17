/*Design two base classes Personnel (name, address, email-id, birth date) and
Academic(marks in tenth, marks in twelth, class obtained). Derive a class
Bio-data from both these classes. Write a C++ program to prepare a bio-data
of a student having Personnel and Academic information.*/
#include<iostream>
using namespace std;
// base class 
class personal{
protected:
string name,addr,email,b_date;
public: 
void acceptP()
{
    cout<<"Enter name ";
    cin>>name;
    cout<<"Enter address ";
    cin>>addr;
    cout<<"Enter email ";
    cin>>email;
    cout<<"Enter birth date ";
    cin>>b_date;
}
void displayP()
{
    cout<<"---- Personal Information----"<<endl;
    cout<<"Name    :"<<name<<endl;
    cout<<"Address :"<<addr<<endl;
    cout<<"Email   :"<<email<<endl;
    cout<<"Birth date :"<<b_date<<endl;
}
};
//base class 2
class Academic{
protected:
float ten_marks,twe_marks;
string class_ob;
public:
void acceptA()
{
    cout<<"Enter Tenth marks : ";
    cin>>ten_marks;
    cout<<"Enter twelth marks : ";
    cin>>twe_marks;
    cout<<"Enter obtained class : ";
    cin>>class_ob;
}
void displayA()
{
    cout<<"---Acendic Information---"<<endl;
    cout<<"Tenth marks : "<<ten_marks<<endl;
    cout<<"twelth marks: "<<twe_marks<<endl;
    cout<<"obtained class: "<<class_ob<<endl;
}
};
//derive class l
class Biodata : public personal,public Academic{
    public:
    void accept()
    {
        cout<<"Enter personal details : "<<endl;
        acceptP();
        cout<<"Enter Acedemic details : "<<endl;
        acceptA();
    }
    void display()
    {
        cout<<"****Student Bio Data****"<<endl;
        displayP();
        displayA();
    }
};
int main()
{
Biodata bio;
bio.accept();
bio.display();
return 0;
}