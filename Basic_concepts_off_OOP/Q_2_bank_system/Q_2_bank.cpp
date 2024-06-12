/*Define a class to represent a bank account. Include the following members:*/
#include<iostream>
using namespace std;
class bank_account
{
     private:
          int a_num,a_bal,deposit,withdraw;
          string a_type,a_name;
     public:
          void account_details();
          void deposit_money();
          void withdraw_and_bal_chack();
          void name_and_bal();
};
void bank_account :: account_details()
     {
          cout<<"\n\t Enter Account Holdder name : ";
          cin>>a_name;
          cout<<"\n\t Enter Account type :";
          cin>>a_type;
          cout<<"\n\t Enter Account Number : ";
          cin>>a_num;
     }
     void bank_account :: deposit_money()
     {
          cout<<"\n\t Enter Deposit Ammout : ";
          cin>>deposit;
          a_bal=a_bal+deposit;
          cout<<"\n\t Deposit succesfull ";
          cout<<"\n\t Dear User your Account balance is "<<a_bal;
     }
     void bank_account :: withdraw_and_bal_chack()
     {
          cout<<"\n\t Enter Withdraw Ammount : ";
          cin>>withdraw;
          a_bal=a_bal-withdraw;
          cout<<"\n\t Withdraw succesfull";
          cout<<"\n\t Dear User your Account balance is "<<a_bal;

     }
     void bank_account :: name_and_bal()
     {
          cout<<"\n\t Account Hollder Name :"<<a_name;
          cout<<"\n\t your account balance :"<<a_bal;
     }    

int main()
{
     bank_account n;

     n.account_details();
     cout<<"\n::::::::::::::::::::::::::::";
     n.deposit_money();
     cout<<"\n::::::::::::::::::::::::::::";     
     n.withdraw_and_bal_chack();
     cout<<"\n::::::::::::::::::::::::::::";  
     n.name_and_bal();
}