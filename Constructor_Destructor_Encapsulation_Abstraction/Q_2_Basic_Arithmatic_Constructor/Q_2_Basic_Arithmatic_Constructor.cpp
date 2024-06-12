/*Write a program of Addition, Subtraction, Division, Multiplication using
constructor.*/
#include<iostream>
using namespace std;
class Basic_Arithmatic
{
     private:
      int a,b,c;
     public:
          Basic_Arithmatic()
          {
               a=20;
               b=5;
          }
          void Addition();
          
          void Subtraction();
          
          void Division();
          
          void Multiplication ();
          
          
};
void Basic_Arithmatic :: Addition()
          {
               c = a + b;
               cout<<"\n\t Addition : "<<c;
          }
void Basic_Arithmatic :: Subtraction()
          {
               c = a - b;
               cout<<"\n\t Subtraction : "<<c;
          }
void Basic_Arithmatic :: Division()
          {
               c = a / b;
               cout<<"\n\t Division : "<<c;
          }
void Basic_Arithmatic :: Multiplication ()
          {
               c = a * b;
               cout<<"\n\t Multiplication : "<<c;
          }
int main()
{
     Basic_Arithmatic a;
     cout<<"---------------Basic_Arithmatic---------------";
     a.Addition();
     a.Subtraction();
     a.Division();
     a.Multiplication();
}