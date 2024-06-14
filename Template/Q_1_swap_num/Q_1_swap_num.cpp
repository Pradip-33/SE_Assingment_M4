//Write a program of to swap the two values using template
#include<iostream>
using namespace std;
template<class s>
void swapping(s b,s a)
{
     s c;
     c=a;
     a=b;
     b=c;
     cout<<"\n\t After swapping";
     cout<<"\n\t a : "<< b << "\n\t b : "<<a;
}
int main()
{
     int i,n;
     cout<<"\n\t Enter numbers for swapping : ";
     cin>> i >> n ;
     cout<<"\n\t Befor swapping";
     cout<<"\n\t i : "<< i << " \n\t n : "<<n;
     swapping( i , n);
}