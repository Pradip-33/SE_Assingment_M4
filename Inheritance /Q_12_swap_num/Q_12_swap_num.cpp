/*Write a program to swap the two numbers using friend function
without using third variable*/
#include<iostream>
using namespace std;
class swapping
{
     private:
               int a,b,c;
     public:
               void get_value()
               {
                    cout<<"\n\t Enter Number a : ";
                    cin>>a;
                    cout<<"\n\t Enter number b : ";
                    cin>>b;
                    cout<<"\n\n\n\t Before Swapping ";
                    cout<<"\n\t a : "<<a;
                    cout<<"\n\t b : "<<b;
               }
               friend void print_value(swapping F);
};
void print_value(swapping F)
{
     F.c=F.a;
     F.a=F.b;
     F.b=F.c;
     cout<<"\n\n\n\t After Swapping ";
     cout<<"\n\t a : "<<F.a;
     cout<<"\n\t b : "<<F.b;
}
int main()
{
     swapping s;
     s.get_value();
     print_value(s);
}