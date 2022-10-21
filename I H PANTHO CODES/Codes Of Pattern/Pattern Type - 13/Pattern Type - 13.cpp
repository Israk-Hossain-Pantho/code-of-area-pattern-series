#include<iostream>
#include<conio.h>
using namespace std ;
int main()
{
   int n , row , col , count = 0 ;

   cout<<"  Enter The Number : ";
   cin>>n ;
   cout<<"\n";

   for(row=1 ; row<=n ; row++)
   {

       for(col=1 ; col<=row ; col ++)
       {
         ++count ;
         cout<<count;
         cout<<" ";
       }
         cout<<"\n";
   }

   getch();

}
