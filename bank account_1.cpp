#include <iostream>
using namespace std;
class Bank{
            int Account_number, Account_type,i;
            float balance; // New_amount is for new account balance after withdraw an amount; New_balance is for the new Account Balance after deposit
            char Account_holder_name[50];
        public:
                void Assign_initial_value()
                {
                    cout<<"Enter the Depositor name:";
                    cin>> Account_holder_name;
                    cout<<endl;
                    cout<<"Enter Account Number:";
                    cin>> Account_number;
                    cout<<endl;
                    {
                        cout<<" Select the Account type from list:"<<endl;
                        cout<<"************************************"<<endl;
                        {
                            cout<<"1. Savings"<< endl;
                            cout<<"2. Current"<<endl;
                            cout<<"3. Other"<<endl;
                            /* {
                                if(i== 1)
                                {
                                    cout<< "Your account type is Savings";
                                }
                                else if(i== 2)
                                {
                                    cout<< "Your account type is Deposit";
                                }
                                else
                                {
                                    cout<< "Your account type is Other";
                                }
                            } */
                        }
                        cout<<"Select Your Account Type from the above list:";
                        cin>> Account_type;
                    }
                    cout<<"Enter your Current Account Balance:";
                    cin>>balance;
                    cout<<endl;
                }
                void Deposit_amount()
                {
                    cout<< "Enter your desire amount to deposit:";
                    int deposit_amount;
                    cin>> deposit_amount;
                    cout<<endl;
                    {
                        balance= (balance + deposit_amount);
                    }
                    cout<<"Your deposit is successful & your new account balance is BDT:"<<balance <<endl<<endl;
                }
                void Withdraw_amount()
                {
                    cout<<"Enter your desire amount to withdraw:";
                    int withdraw_amount;
                    cin>> withdraw_amount;
                    cout<<endl;
                    {
                    if(withdraw_amount> balance)
                    {
                        cout<<"Sorry, Your current account balance is less than your desire amount to withdraw..";
                    }
                    else
                    {
                        balance= (balance - withdraw_amount);
                        cout<<"Your transaction is successful & your new account balance is BDT:"<< balance<<endl;
                    }
                    }
                }
        void display()
        {
            cout<<"Your desire account holder name: " <<Account_holder_name<<endl;
            cout<<"Total Amount BDT: " << balance<<endl;
        }
        Bank() {}
        ~Bank() {}
};
int main()
{
    int d;
    Bank c;
    c.Assign_initial_value();


    while(1) {

        cout<< "What do you want to do?"<<endl
        <<"----------------------------------"<<endl
        <<"1. Deposit an amount."<<endl
        <<"2. Withdraw an amount."<<endl
        <<"3. Check your Account Information."<<endl
        <<"4. Exit..."<<endl;
        cout<<"********************************"<<endl;
        cin>>d;

        if(d== 1)
        {
            c.Deposit_amount();
        }
        else if(d== 2)
        {
            c.Withdraw_amount();
        }
        else if(d== 3)
        {
            c.display();
        }
        else if(d==4) break;
        else
            cout <<"No match found.....";
        }
return 0;
}
