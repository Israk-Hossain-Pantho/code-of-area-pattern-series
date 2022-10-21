#include<iostream>
#include<conio.h>
using namespace std ;
int main()
{
   int n , row , col ;

   cout<<"  Enter The Number : ";
   cin>>n ;

   for(row=1 ; row<=n ; row++)
   {
       //printing space
       for(col=1 ; col<=n-row ; col ++)
       {
           cout<<" ";
       }
       for(col=1 ; col<=row ; col++)
       {
           cout<<col;
       }
          cout<<"\n";
   }


   getch();

}
