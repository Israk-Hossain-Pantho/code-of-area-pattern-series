#include<iostream>
#include<conio.h>
using namespace std ;
int main()
{
   int n , col , row ;

   cout<<"  Enter The Number : " ;
   cin>>n;

   for(row=1 ; row<=n ; row++)
    {
      for(col=1 ; col<=n-row ; col++)
       {
          cout<<" ";
       }
      for(col=1 ; col<=row ; col++)
       {
          cout<<col;
       }
      for(col=row-1 ; col>=1 ; col--)
       {
          cout<<col ;
       }
       for(col=1 ; col<=n-row ; col++)
       {
          cout<<" ";
       }
          cout<<"\n";
    }
   getch();

}
