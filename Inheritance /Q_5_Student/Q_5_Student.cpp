/*Assume that the test results of a batch of students are stored in three different
classes. Class Students are storing the roll number. Class Test stores the
marks obtained in two subjects and class result contains the total marks
obtained in the test. The class result can inherit the details of the marks
obtained in the test and roll number of students. (Multilevel Inheritance)*/
#include<iostream>
using namespace std;
class student
{
     protected:
          string s_name;
          int s_roll;
     public:
          void get_data()
          {
               cout<<"\n\t Enter Studen name : ";
               cin>>s_name;
               cout<<"\n\t Enter Studen rollno : ";
               cin>>s_roll;
          }
          void Put_data()
          {
               cout<<"\n\t Student Name : "<<s_name;
               cout<<"\n\t Sutdent Rollno : "<<s_roll;
          }
};
class Test : public student 
{
     protected:
     int sub1,sub2;
     public:
     void get_info()
     {
          cout<<"\n\t Enter SUbject 1 marks : ";
          cin>>sub1;
          cout<<"\n\t Enter SUbject 2 marks : ";
          cin>>sub2;
     }
     void put_info()
     {
          cout<<"\n\t Subject 1 Mark : "<<sub1;
          cout<<"\n\t Subject 2 Mark : "<<sub2;
     }
};
class Result : public Test
{
     private :
          int Total;
     public:
          void total_marks()
          {
               Total = sub1 + sub2 ;
          }
          void Print_marks()
          {
               cout<<"\n\t Total Marks : "<<Total;
          }
};
int main()
{
     Result t;
     t.get_data();
     t.get_info();
     t.total_marks();
     t.Put_data();
     t.put_info();
     t.Print_marks();
}