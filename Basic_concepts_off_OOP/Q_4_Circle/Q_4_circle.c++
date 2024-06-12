/*Write a C++ program to implement a class called Circle that has private
member variables for radius. Include member functions to calculate the
circle's area and circumference.*/
#include<iostream>
using namespace std;
class circle
{
     private:
     float r;
     public:
          float get_radius()
          {
               cout<<"\n\t Enter the radius of circle :";
               cin>>r;
          }
          float area , circumference;
          float print_area_and_circumference();
          
};   
float circle :: print_area_and_circumference()
          {
                area = 3.14 * r * r;
                cout<<"\n\t Area of Circle is : "<<area;

                circumference= 2 * 3.14 * r;
                cout<<"\n\t Circumference of Cirecle is :"<<circumference;

          }
int main()
{
     circle c;
     c.get_radius();
     c.print_area_and_circumference();

}