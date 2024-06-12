//WAP to create simple calculator using class
#include<iostream>
using namespace std;
class calculator
{
     private:
               int n1,n2;
              
     public:
               char choice;
               void value()
               {
                    cout<<"\n\t Enter the value :";
                    cin>>n1;
                    cout<<"\n\t Enter the value :";
                    cin>>n2;
               }
               void basic_arithmatic();
               void choice_Oprator();
};
void calculator :: basic_arithmatic()
               {
               cout<<"\nBASIC ARITHMATIC";
               cout<<"\n\t +. Addition";
               cout<<"\n\t -. Subtraction";
               cout<<"\n\t *. Multiplication";
               cout<<"\n\t /. Division";
               cout<<"\n\t E. Exit";
               }

void calculator :: choice_Oprator()
               {
                    cout<<"\n\t Choice a ARITHMATIC Oprator :";
                    cin>>choice;
                    switch (choice)
                    {
                    case '+': cout<<"\n\t Additon : "<<n1+n2;
                         break;
                    case '-': cout<<"\n\t Subtraction : "<<n1-n2;
                         break;
                    case '*': cout<<"\n\t Multiplication : "<<n1*n2;
                         break;
                    case '/': cout<<"\n\t Division: "<<n1/n2;
                         break;    
                    case 'E':cout<<0;
                         break;               
                    default:cout<<"\n\t invalid choice";
                         break;
                    }
               }
int main()
{
     calculator c;
     c.value();
     c.basic_arithmatic();
     c.choice_Oprator();
}