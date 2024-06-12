/*Assume a class cricketer is declared. Declare a derived class batsman from
cricketer. Data member of batsman. Total runs, Average runs and best
performance. Member functions input data, calculate average runs, Display
data. (Single Inheritance)*/
#include<iostream>
using namespace std;
class Cricketer
{
     protected:
          string c_name;
          int c_no,t_m;
     public:
          void get_info()
          {
               cout<<"\n\t Enter Name of Crecketer : ";
               cin>>c_name;
               cout<<"\n\t Enter Crecketer No : ";
               cin>>c_no;
               cout<<"\n\t Enter Total match :";
               cin>>t_m;
          }
          void put_info()
          {
               cout<<"\n\t Crecketer Name :"<<c_name;
               cout<<"\n\t Crecket no : "<<c_no;
               cout<<"\n\t Total match: "<<t_m;
          }
};
class batsman : public Cricketer
{
     private:
     int run,a_run;
     public:
     void get_data()
     {
          cout<<"\n\t Enter Total Run Of Cricketer : ";
          cin>>run;
     }
     void put_data()
     {
          cout<<"\n\t Total Run : "<<run; 
     }
     void cal_average()
     {
        a_run = run / t_m ;
        cout<<"\n\t Avearge Runs : "<<a_run;
     }


};
int main()
{
     batsman b;
     b.get_info();
     b.get_data();
     b.put_info();
     b.put_data();
     b.cal_average();
     
}