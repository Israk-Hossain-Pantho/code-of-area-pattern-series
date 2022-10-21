#include<iostream>
#include<conio.h>
using namespace std ;
int main()
{
    int a , b ;

    cout<<"  Enter The Value Of A : " ;
    cin>>a;
    cout<<"  Enter The Value Of B : " ;
    cin>>b;
    if (a < 0 )
    {
      cout<<"\n  Number A is : "<<(-a);
    }

     else
    {
      cout<<"\n  Number A is : "<<a ;
    }
     if (b < 0 )
    {
      cout<<"\n  Number B is : "<<(-b);
    }

     else
    {
      cout<<"\n  Number B is : "<<b ;
    }
    cout<<"\n" ;
    if (a % 2 == 0 )
    {
      cout<<"\n  A is Even Number" ;
    }

     else
    {
      cout<<"\n  A is Odd Number" ;
    }
    cout<<"\n       &" ;
    if  ( b % 2 == 0 )
    {
      cout<<"\n  B is Even Number" ;
    }
     else
    {
      cout<<"\n  B is Odd Number" ;
    }

     if (a > b )
    {
      cout<<"\n\n  A is Large Number" ;
    }

     else
    {
      cout<<"\n\n  B is Large Number" ;
    }
    getch();

}





