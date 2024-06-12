/*Write a C++ program to implement a class called Employee that has
private member variables for name, employee ID, and salary. Include
member functions to calculate and set salary based on employee
performance. Using of constructor*/
#include<iostream>
using namespace std;
class Employee
{
     private:
          int e_id,e_salary,e_perfom;
          string e_name;
     public:
           Employee()
          {
               cout<<"\n\t Enter Employee Name :";
               cin>>e_name;
               cout<<"\n\t Enter Employee ID : ";
               cin>>e_id;
               cout<<"\n\t Enter Employee Salary : ";
               cin>>e_salary;
               cout<<"\n\t Enter Employee Performance ( /10): ";
               cin>>e_perfom;
          }
            void calulating();
            void print_info(); 
};
 void Employee :: calulating()
          {
              if(e_perfom ==10)
              {
                    e_salary = e_salary + 5000;
              }
              else if(e_perfom ==9 )
              {
                    e_salary = e_salary + 4500;
              }
              else if(e_perfom ==8 )
              {
                    e_salary = e_salary + 4000;
              }
              else if(e_perfom ==7 )
              {
                    e_salary = e_salary + 3500;
              }
            else if(e_perfom ==6 )
              {
                    e_salary = e_salary + 3000;
              }
               else if(e_perfom ==5 )
              {
                    e_salary = e_salary + 2500;
              }
               else if(e_perfom ==4 )
              {
                    e_salary = e_salary + 2000;
              }
               else if(e_perfom ==3 )
              {
                    e_salary = e_salary + 1500;
              }
               else if(e_perfom ==2 )
              {
                    e_salary = e_salary + 1000;
              }
               else if(e_perfom ==1 )
              {
                    e_salary = e_salary + 500;
              }
              else
              {

              }
          }
void Employee::print_info()
          {
               cout<<"\n\t Employee Name : "<<e_name;
               cout<<"\n\t Employee Id   : "<<e_id;
               cout<<"\n\t Employee  Salary:"<<e_salary;
          }
int main()
{
      Employee e;
      e.calulating();
      e.print_info();      
}

