#include<iostream>
#include<conio.h>
using namespace std ;
int main()
{
   int n , row , col ;

   cout<<"  Enter The Number : ";
   cin>>n ;

   for(row=n ; row>=1 ; row--)
   {
       for(col=row ; col>=1 ; col--)
       {
           cout<<"  "<<row;
       }
       cout<<"\n";
   }



  getch();

}
