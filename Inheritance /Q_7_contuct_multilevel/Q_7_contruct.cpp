/*Write a C++ Program to illustrates the use of Constructors in multilevel
inheritance*/
#include<iostream>
using namespace std;

class Construct
{
	
	public : 
	int a,b,c;
		Construct()
		{
			a=10;
			b=15;
			c=a+b;
		}	
          void add()
          {
               cout<<"\n\n\t Addition = "<<c;
          }
};
class subtraction : public Construct
{
	
	public : 
	int d,e,f;
          subtraction()
          {
               d=20;
			e=10;
			f=d-e;
          }
		void sub()
		{
			
			cout<<"\n\n\t Subtraction = "<<f;
		}
};
class multiplication : public subtraction
{
	public : 
	int g,h,i;
          multiplication()
          {
               g=10;
               h=5;
			i=g*h;
          }
		void mul()
		{
			
			cout<<"\n\n\t Multiplication = "<<i;
			
		}
};

int main()
{
	multiplication M;
	M.add();
	M.sub();
	M.mul();
}