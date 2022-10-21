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
       for(col=1 ; col<=row ; col ++)
       {
           cout<<"  "<<row % 2;
       }
       cout<<"\n";
   }



  getch();

}
