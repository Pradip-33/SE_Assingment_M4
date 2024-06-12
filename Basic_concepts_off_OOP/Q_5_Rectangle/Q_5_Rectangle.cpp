/*Write a C++ program to create a class called Rectangle that has private
member variables for length and width. Implement member functions to
calculate the rectangle's area and perimeter.*/
#include<iostream>
using namespace std;
class Rectangle
{
     private:
          int l,w,a,p;
     public:
          void get_info()
          {
               cout<<"Enter the length of Rectangle : ";
               cin>>l;
               cout<<"Enter the width of Rectangle :";
               cin>>w;
          }
          void aera();
          void perimeter();
};
void Rectangle ::aera()
     {
          a = w * l ;
          cout<<"\n\t Area Of Rectangle is : "<<a;
     }
void Rectangle ::perimeter()
     {
          p = 2 * (l + w);
          cout<<"\n\t Perimeter Of Rectangle is : "<<p;
     }
int main()
{
     Rectangle R;
     R.get_info();
     R.aera();
     R.perimeter();
}
