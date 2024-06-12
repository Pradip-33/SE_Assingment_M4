/*Write a C++ program to create a class called Car that has private
member variables for company, model, and year. Implement member
functions to get and set these variables.*/
#include<iostream>
using namespace std;
class Car
{
     private:
          string Company;
          string model;
          int year;
     public:
          void get_Carinfo();
          void print_Carinfo();
         
};
void Car :: get_Carinfo()
          {
               cout<<"\n\t Enter Car Company Name :";
               cin>>Company;
               cout<<"\n\t Enter Car Model Name : ";
               cin>>model;
               cout<<"\n\t Enter Car model lunch year : ";
               cin>>year;
          }
void Car :: print_Carinfo()
     {
          cout<<"\n\t\t:::::::::::: Car Information ::::::::::::";
          cout<<"\n\t\t\t Compnay : "<<Company;
          cout<<"\n\t\t\t Modle   : "<<model;
          cout<<"\n\t\t\t Year    : "<<year;
     }
int main()
{
     Car c;
     c.get_Carinfo();
     c.print_Carinfo();
}