#include<iostream>
#include<conio.h>
using namespace std ;
int main()
{
   int num , count=0 ;

   cout<<"  Enter The Number : ";
   cin>>num ;

   while(num!=0)
   {
       num=num/10 ;
       ++count ;

   }

   cout<<"\n  Counting The Number Of Digit : "<<count;

  getch();

}
