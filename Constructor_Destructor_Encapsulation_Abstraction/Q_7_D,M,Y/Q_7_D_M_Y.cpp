/*Write a C++ program to implement a class called Date that has private
member variables for day, month, and year. Include member functions to
set and get these variables, as well as to validate if the date is valid.*/
#include<iostream>
using namespace std;
class Date 
{
     private:
          int day,month,year;
     public:
          Date()
          {
               cout<<"\n\t Enter Day  :";
               cin>>day;
               cout<<"\n\t Enter Month :";
               cin>>month;
               cout<<"\n\t Enter Year :";
               cin>>year;
          }
          void print_data();

};
void Date ::print_data()
          {
               cout<<"\n\t Days : "<<day;
               cout<<"\n\t Month: "<<month;
               cout<<"\n\t Year : "<<year;    
               if(day<32)
                  {
                    if(month<13)
                      {
                         cout<<"\n\t Date is Valid";
                      }
                    else
                    {
                         cout<<"\n\t Date is Invalid";
                    }  
                  }
               else
               {
                         cout<<"\n\t Date is Invalid";
               }

          }
int main()
{
     Date d;
     d.print_data();
}