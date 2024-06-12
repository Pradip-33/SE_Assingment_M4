/*Write a C++ program to create a class called Triangle that has private
member variables for the lengths of its three sides. Implement member
functions to determine if the triangle is equilateral, isosceles, or scalene.*/
#include<iostream>
using namespace std;

class Triangle
{
	private : 
		int a, b, c;
		
	public : 	
		
		Triangle(int l1,int l2,int l3)
		{
			a=l1;
			b=l2;
			c=l3;
		}
	
		void print()
		{
			if(a == b && b == c)
			{
				cout<<"\n\n\t Triangle is Equilateral ";
			}
			else if(a == b || b == c || a == c)
			{
				cout<<"\n\n\t Triangle is Isosceles ";
			}
			else
			{
				cout<<"\n\n\t Triangle is Scalene ";
			}
		}
};

int main()
{
	
	int t1,t2,t3;
	
	cout<<"\n\n\t Enter a side length : ";
	cin>>t1>>t2>>t3;
	
	Triangle T(t1,t2,t3);
	T.print();
}