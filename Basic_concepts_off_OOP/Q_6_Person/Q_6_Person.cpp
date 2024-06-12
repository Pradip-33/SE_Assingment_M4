/*Write a C++ program to create a class called Person that has private
member variables for name, age and country. Implement member
functions to set and get the values of these variables.*/
#include<iostream>
using namespace std;
class Person
{
     private:
     int p_age;
     string p_name;
     string p_country;
     public: 
          void get_value();
          void put_values();
        
};
void Person ::get_value()
          {
               cout<<"\n\t Enter the name of Person :";
               cin>>p_name;
               cout<<"\n\t Enter the age of Person : ";
               cin>>p_age;
               cout<<"\n\t Enter the Country of Person : ";
               cin>>p_country;
          }
void Person ::put_values()
          {
               cout<<"\n\n\t Person info ";
               cout<<"\n\n\t Name : "<<p_name;
               cout<<"\n\t Age : "<<p_age;
               cout<<"\n\t Country :"<<p_country;
          }
int main()
{
     Person p;
     p.get_value();
     p.put_values();
}