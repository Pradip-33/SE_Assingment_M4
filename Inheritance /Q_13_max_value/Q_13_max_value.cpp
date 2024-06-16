/*Write a program to find the max number from given two numbers
using friend function*/
#include<iostream>
using namespace std;
class max_num
{
     private:
          int a ,b;
     public:
          void get_value()
          {
               cout<<"\n\t Enter the value a : ";
               cin>>a;
               cout<<"\n\t Enter the value b : ";
               cin>>b;
          }
          friend void max_value(max_num F);
};
void max_value(max_num F)
{
     if (F.a>F.b)
     {
          cout<<"\n\t A is a maximumm number :"<<F.a;
     }
     else
     {
          cout<<"\n\t B is a maximumm number :"<<F.b;
     }
}
int main()
{
     max_num m;
     m.get_value();
     max_value(m);
}