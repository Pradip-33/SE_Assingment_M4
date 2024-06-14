//Write a C++ Program display Student Mark sheet using Multiple inheritance
#include<iostream>
using namespace std;
class student
{
     protected:
                string s_name;
                int s_roll,s_age;
     public:
     void get_info()
     {
          cout<<"\n\t Enter Student Name :";
          cin>>s_name;
          cout<<"\n\t Enter Student Rollno : ";
          cin>>s_roll;
          cout<<"\n\t Enter Student Age : ";
          cin>>s_age;
     }
     void put_info()
     {
          cout<<"\n\t Student Name : "<<s_name;
          cout<<"\n\t Student Rollno : "<<s_roll;
          cout<<"\n\t Student Age : "<<s_age;
     }
};
class marks
{
     protected:
               int s1,s2,s3,s4,s5,std;
     public:
     void get_mark()
     {
          cout<<"\n\t Maths : ";
          cin>>s1;
          cout<<"\n\t scince : ";
          cin>>s2;
          cout<<"\n\t Gujrati : ";
          cin>>s3;
          cout<<"\n\t Hindi : ";
          cin>>s4;
          cout<<"\n\t EVS : ";
          cin>>s5;
     }
     void print_mark()
     {
          cout<<"\n\t Matchs  : "<<s1;
          cout<<"\n\t scince  : "<<s2;
          cout<<"\n\t Gujrati : "<<s3;
          cout<<"\n\t Hindi   : "<<s4;
          cout<<"\n\t EVS     : "<<s5;
     }
};
class Result : public student, public marks
{
     private:
          int t_mark,per;
          string grade;
     public:
          void calulate()
          {
               t_mark = s1 + s2 + s3 + s4 + s5;
               per = t_mark / 5;        
          }
          void print_result()
          {
               cout<<"\n\t Total Marks : "<<t_mark;
               cout<<"\n\t  percent :"<<per;
               if(per>=70)
               {
                              printf("\n\n\t Grade : A+");
               }
               else if(per>=60)
               {
                              printf("\n\n\t Grade : A");
               }
               else if(per>=50)
               {
                              printf("\n\n\t Grade : B");
               }    
               else if(per>=40)
               {
                              printf("\n\n\t Grade : C");
               }    

          }
};
int main()
{
     Result r;
     r.get_info();
     r.get_mark();
     r.calulate();
     cout<<"\n♢♢♢♢♢♢♢♢♢♢♢♢♢♢♢♢♢♢♢♢♢♢♢♢♢♢♢♢♢♢♢♢♢♢♢♢♢♢♢♢";
     r.put_info();
     r.print_mark();
     r.print_result();
}
