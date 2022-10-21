#include<iostream>
#include<conio.h>
using namespace std ;
int main()
{
   int n , col , row ;
   char pantho ;

   cout<<"  Enter The Number : " ;
   cin>>n;
   pantho = 65 ;

   for(row=1 ; row<=n ; row++)
    {
      for(col=1 ; col<=row ; col++)
       {
          cout<<" "<<pantho++;
       }

          cout<<"\n";
    }
   getch();

}
