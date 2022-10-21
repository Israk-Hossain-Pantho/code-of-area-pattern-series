#include<iostream>
#include<conio.h>
using namespace std ;
int main()
{
   int num1 , num2 , n1 , n2 , rem , gcd , lcm ;

   cout<<"  Enter The First Number : ";
   cin>>num1 ;
   cout<<"  Enter The Second Number : ";
   cin>>num2 ;

   n1 = num1 ;
   n2 = num2 ;

   while( n2 != 0)
   {
         rem = n1%n2 ;
         n1 = n2 ;
         n2 = rem ;
   }

   gcd = n1 ;
   lcm = ( num1 * num2 ) / gcd ;

   cout<<"\n  GCD Of Those Number : "<<gcd ;
   cout<<"\n  LCM Of Those Number : "<<lcm ;

  getch();

}

