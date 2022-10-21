#include <iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i, n, t1 = 0, t2 = 1, nextTerm;
    cout<<"  Enter the number of terms: ";
    cin>>n;
    cout<<"  Fibonacci Series: ";

    for (i = 1; i <= n; ++i) {
        cout<<t1;
        cout<<" ";
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    getch();
}
