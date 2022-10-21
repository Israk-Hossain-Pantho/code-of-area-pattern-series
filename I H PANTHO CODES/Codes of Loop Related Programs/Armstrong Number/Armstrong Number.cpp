#include<iostream>
#include<conio.h>
using namespace std ;
int main()
{
   int num , sum , temp , rem ;

   cout<<"  Enter A Digit : " ;
   cin>>num ;

   sum = 0 ;
   temp = num ;

   while(temp != 0)
   {
       rem = temp % 10 ;
       sum = sum + rem*rem*rem  ;
       temp = temp / 10 ;
   }

       cout<<"\n  Revarse The number : "<<sum<<endl ;

   if (sum = num)
   {   cout<<"\n  The Number is A Armstrong Number " ; }
   else
   {   cout<<"\n  The Number is Not A Armstrong Number " ; }

   getch();

}

