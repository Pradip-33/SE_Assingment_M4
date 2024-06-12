//Write a C++ Program to find Area of Rectangle using inheritance
#include<iostream>
using namespace std;
class length
{    
     protected:
          int l;
     public:
          void get_info()
          {
               cout<<"\n\t Enter the Lenght :";
               cin>>l;
          }
     
};
class Width : public length
{
     private:
          int w,r;
     public:
          void get_data()
          {
               cout<<"\n\t Enter the Width :";
               cin>>w;
          }
          void print_info()
          {
               r = l * w ;
               cout<<"\n\t Area of Rectangle :"<<r;
          }
};
int main()
{
     Width t;
     t.get_info();
     t.get_data();
     t.print_info();
}