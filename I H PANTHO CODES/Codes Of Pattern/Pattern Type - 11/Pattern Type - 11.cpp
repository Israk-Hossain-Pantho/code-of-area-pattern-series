#include<iostream>
#include<conio.h>
using namespace std ;
int main()
{
   int n , row , col ;

   cout<<"  Enter The Number : ";
   cin>>n ;
   cout<<"\n";

   for(row=1 ; row<=n ; row++)
   {

       for(col=1 ; col<=n ; col ++)
       {
         if( col == 1 || row == n || row == col)
             cout<<"*";
         else
            cout<<" ";
       }
       cout<<"\n";
   }


  getch();


   }

