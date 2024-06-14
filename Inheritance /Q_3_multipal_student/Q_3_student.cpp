/*Create a class person having members name and age. Derive a class student
having member percentage. Derive another class teacher having member
salary. Write necessary member function to initialize, read and write data.
Write also Main function (Multiple Inheritance)*/
#include<iostream>
using namespace std;
class Person
{
     protected:
     int roll,age;
     string name;
     public:
          void get_info()
          {
               cout<<"\n\t Enter  Name :";
               cin>>name;
               cout<<"\n\t Enter Rollno :";
               cin>>roll;
               cout<<"\n\t Enter  Age : ";
               cin>>age;
          }
          void put_info()
          {
               cout<<"\n\t  Name :"<<name;
              
               cout<<"\n\t  Rollno :"<<roll;
               
               cout<<"\n\t  Age :"<<age;          
          }
};
class Student
{
     protected:
          int s1,s2,s3,t_mark,per;
     public:
     void get_data()
     {
          cout<<"\n\t Enter sub mark :";
          cin>>s1;
          cout<<"\n\t Enter sub mark :";
          cin>>s2;
          cout<<"\n\t Enter sub mark :";
          cin>>s3;
     }
     void calulate_mark()
     {
          t_mark = s1 + s2 + s3 ;
          cout<<"\n\t Total marks is : "<<t_mark;
          per  = t_mark / 3;
          cout<<"\n\t Percentage is : "<<per;
     }

};
class teacher : public Person , public Student
{
     private:
     int salary;
     public:
     void get_salary()
     {
          cout<<"\n\t Enter slary of teacher : ";
          cin>>salary;
     }
     void print_salary()
     {
          cout<<"\n\t salary of teacher : "<<salary;
     }
};
int main()
{
     teacher t;
     t.get_info();
     t.get_data();
     t.get_salary();
     t.put_info();
     t.calulate_mark();
     t.print_salary();
}
