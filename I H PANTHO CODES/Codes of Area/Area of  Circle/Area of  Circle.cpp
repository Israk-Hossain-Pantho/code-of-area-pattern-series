#include<iostream>
#include<conio.h>
using namespace std ;
int main()
{
  // r = radius
  double r, circumference , area ;

  cout<<"Enter Radius : ";
  cin>>r;

  circumference = 2 * 3.1416 * r ;
  area = 3.1416 * r * r ;

  cout<<"Circumference = "<<circumference<<endl;
  cout<<"Area of Circle = " <<area;

  getch();

}


