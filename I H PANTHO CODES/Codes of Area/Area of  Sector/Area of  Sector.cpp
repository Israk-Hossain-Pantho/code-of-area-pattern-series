#include<iostream>
#include<conio.h>
using namespace std ;
int main()
{
  // r = radius &
  double r, angle , area ;

  cout<<"Enter Radius : ";
  cin>>r;

  cout<<"Enter Angle : ";
  cin>>angle;

  area = 0.5 * r * r * angle ;

  cout<<"Area of Sector = " <<area;

  getch();

}
