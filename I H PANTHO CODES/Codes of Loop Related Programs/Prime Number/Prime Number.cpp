#include<iostream>
#include<conio.h>
using namespace std ;
int main()
{
   int  num , count = 0 , i ;

   cout<<"  Enter a Positive Number : " ;
   cin>>num ;

   for(i = 2 ; i < num ; i++ )
   {
       if(num%i==0)
       {
           count++ ;
           break ;
       }

   }
       if(count == 0)
       { cout<<"  The Number Is A Prime Number";}
       else
       { cout<<"  The Number Is Not A Prime Number";}

  getch();

}
