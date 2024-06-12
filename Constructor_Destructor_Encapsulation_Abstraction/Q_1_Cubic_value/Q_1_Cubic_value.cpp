/*Write a program to find the multiplication values and the cubic values using
inline function*/
#include<iostream>
using namespace std;
class Cubic
{
     private:
          int c,v;
     public:
          void get_num()
          {
               cout<<"\n\n\t\t Enter The Number for Finding Cubic Value";
               cout<<"\n\t\t value : ";
               cin>>c;
          }
          void put_value()
          {
               v = c * c * c;
               cout<<"\n\t Cubic value for "<<c<<" is :"<<v;
          }
};
int main()
{
     Cubic e;
     e.get_num();
     e.put_value();
}