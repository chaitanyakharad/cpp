/* write a c++ program to accept and display bank account details as acc_no , acc_hoder name, address, contact number and balance .
perform deposit of some amounted display modified bank account details (use maniputors) */
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
class bank{
    int acc_no;
    int mob;
    string name;
    string addr;
    
    double bal;
    public:
    void accept(){
        cout<<"Enter Account Number ";
        cin>>acc_no;

        cout<<"Enter Account Hoder Name ";
        cin>>name;

        cout<<"Enter Address ";
        cin>>addr;

        cout<<"Enter Mobile Number";
        cin>>mob;

        cout<<"Enter balance ";
        cin>>bal;
    }
    void dispaly ()
    {
        cout<<left<<setw(20)<<"Bank Account Details "<<endl;
        cout<<left<<setw(20)<<"Account Number : "<<acc_no<<endl;
        cout<<left<<setw(20)<<"Account Holder Name : "<<name<<endl;
        cout<<left<<setw(20)<<"Address : "<<addr<<endl;
        cout<<left<<setw(20)<<"MObile Number : "<<mob<<endl;
        cout<<left<<setw(20)<<"Balance : "<<bal<<endl;     
    }
    void deposit(double amt)
    {
        if(amt>0)
        {
            bal+=amt;
            cout<<"\nDeposited :"<<amt<<endl;
        }
        else 
        cout<<"\nInvalid deposit Amount"<<endl;
    }

};
int main()
{
    double amount;
    bank a;
    a.accept();
    cout<<"\nBefore deposit "<<endl;
    a.dispaly();
    cout<<"Enter Amount to deposit "<<endl;
    cin>>amount;
    a.deposit(amount);
    cout<<"\nAfter deposit ";
    a.dispaly();

}
