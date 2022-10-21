#include<iostream>
#include<conio.h>
using namespace std ;
int main()
{
   int num , sum=0 , rem , temp , i , fact ;

   cout<<"  Enter A Number : ";
   cin>>num ;

   temp = num ;

   while (temp != 0)
   {
       rem = temp % 10 ;
       fact = 1 ;
       for(i=1;i<=rem;i++)
        {
          fact = fact * i ;
        }
       sum = sum + fact ;
       temp = temp / 10 ;

   }
   if(sum == num)
     cout<<"  THE NUMBER IS A STRONG NUMBER";
   else
     cout<<"  THE NUMBER IS A NOT STRONG NUMBER";


  getch();

}
