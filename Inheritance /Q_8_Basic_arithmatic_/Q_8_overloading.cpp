/*Write a program to Mathematic operation like Addition, Subtraction,
Multiplication, Division Of two number using different parameters and
Function Overloading*/
#include<iostream>
using namespace std;
class mat
{
     private:
     int c;
     public:
          void add(int a , float b)
          {
               c = a + b ;
               cout<<"\n\t Addition :"<<c;
          }
          void add(int a , float b, int d)
          {
               c = a - b - d ;
               cout<<"\n\t Subtraction :"<<c;
          }
          void add(int a , float b , int d , float e)
          {
               c = a * b ;
               cout<<"\n\t Multiplication :"<<c;
          }
          void add(int a,int d,float e , float b,int f)
          {
               c = a / b ;
               cout<<"\n\t Divison :"<<c;
          }

};
int main()
{
     mat m;
     m.add(5,6.4);
     m.add(3,2.9,1);
     m.add(4,5.3,3,3.3);
     m.add(20,6,3.3,5.2,4);
}