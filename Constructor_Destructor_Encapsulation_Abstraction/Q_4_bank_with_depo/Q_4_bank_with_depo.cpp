/*Write a C++ program to implement a class called Bank Account that has
private member variables for account number and balance. Include
member functions to deposit and withdraw money from the account.*/
#include<iostream>
using namespace std;
class Bank_Account  //class 
{
     private:  //data members 
          int a_no;
          int a_bal;
          int w,d;
     public:   // member fuctions 
          Bank_Account() //constuctor 
          {
               a_bal=1000; // by default balance is 1000 
          }
          void account_details()
          {
               cout<<"\n\t Enter the Account Number : "; // Enter accout number 
               cin>>a_no;
          }
          void print_details();    // Print account details
          void account_withdraw(); // Put  withdraw ammount
          void account_deposit();  // Put Deposit Ammount 
};
void Bank_Account ::print_details()     // Print account details
               {
                    cout<<"\n\t ::::::::Account Details::::::::";
                    cout<<"\n\t Account Number : "<<a_no;
                    cout<<"\n\t Account Balance : "<<a_bal;
               }    
void Bank_Account ::account_withdraw()  // Put  withdraw ammount
               {
                  cout<<"\n\t Enter the Withdraw Ammount: " ;
                  cin>>w;
                  a_bal = a_bal - w ;
                  cout<<"\n\t Available Balance : "<< a_bal ; // Balance after withdraw 
               }
void Bank_Account ::account_deposit()   // Put Deposit Ammount
               {
                    cout<<"\n\t Enter the Deposit Ammount : ";
                    cin>>d;
                    a_bal = a_bal + d ;
                    cout<<"\n\t Your  Updated Balance : "<< a_bal; // Balance after Deposit
               }
int main()     
{
     Bank_Account b;
     b.account_details();
     b.print_details();
     cout<<"\n\t::::::::::::::::::::::::::::::::::";
     b.account_deposit();
     cout<<"\n\t::::::::::::::::::::::::::::::::::";
     b.account_withdraw();
     cout<<"\n\t::::::::::::::::::::::::::::::::::";
}