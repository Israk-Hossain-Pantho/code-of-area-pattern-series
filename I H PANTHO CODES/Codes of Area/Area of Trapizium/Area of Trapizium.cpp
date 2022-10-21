#include<iostream>
#include<conio.h>
using namespace std ;
int main()
{
  double a , b , vertical_height , area ;

  cout<<"Enter Base A : ";
  cin>>a;

  cout<<"Enter Base B : ";
  cin>>b;

  cout<<"Enter Base Vertical Height : ";
  cin>>vertical_height;

  area = 0.5 * (a+b) * vertical_height ;

  cout<<"Area of Trapizium = " <<area;

  getch();

}


