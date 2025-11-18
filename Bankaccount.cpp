// write a cpp program
#include<iostream>
using namespace std;
class Bankaccount 
{
    private:
    double bal;
    public:
    // constructor to initialize balance 
    Bankaccount(double initialbal)
    {
        bal=initialbal;

    }
    //deposit amount
    void deposit (double amt)
    {
        if(amt>0)
        {
            bal+=amt;
            cout<<"deposit amount "<<amt<<endl<<"new balance "<<bal<<endl;
        }
        else{
            cout<<"invalid deposit amount"<<endl;
        }
    }
    //withdraw amount 
    void withdraw (double amount)
    {
        if(amount>bal)
        {
            cout<<"insufficient balance"<<endl;
        } else if (amount<bal)
            {
                bal-=amount;
                cout<<"withdraw : "<<amount<< endl<< "new balance "<<bal <<endl;
            }
            else{
                cout<<"invalid withdrawal"<<endl;

            }
        }
    
    // public method to check balance
    double getbalance()
    {
        return bal;
    }
    
};
int main()
{
    // create object
    Bankaccount ma(10000);
    ma.deposit(5000);
    ma.withdraw(3000);
   // cout<<ma.getbalance();
    return 0;    
}