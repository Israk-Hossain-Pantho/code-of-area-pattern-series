#include<iostream>
#include<conio.h>
using namespace std ;
int main()
{
   int i , fact = 1 , n ;

   cout<<"  Enter The Value : " ;
   cin>>n;
   cout<<"\n  Counting The Factorial of "<<n<<endl;


   for(i=1 ; i<=n ; i++)
    {

       fact = fact*i ;

    }

       cout<<"\n      "<<n<<" ! = "<<fact<<endl ;
   getch();

}
