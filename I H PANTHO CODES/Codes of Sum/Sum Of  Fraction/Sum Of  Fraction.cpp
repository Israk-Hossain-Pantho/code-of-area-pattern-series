#include<iostream>
#include<conio.h>
using namespace std ;
int main()
{
   float n1 , n2 , i , sum=n1 ;

   cout<<"  Enter The First Number : ";
   cin>>n1 ;
   cout<<"  Enter The Last Number : ";
   cin>>n2 ;

   for (i=n1 ; i<=n2 ; i++)
   {
      sum = sum + (1/i) ;
   }

   cout<<"\n  Sum Of The Square Series : "<<sum ;


  getch();

}
