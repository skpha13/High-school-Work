#include <iostream>

using namespace std;

int main()
{
    int a,b,c,k=0;
    cout<<"a=";cin>>a;
    cout<<"b=";cin>>b;
    cout<<"c=";cin>>c;

    if(a*a==b*b+c*c)
        k=k+1;
    if(b*b==a*a+c*c)
        k=k+1;
    if(c*c==a*a+b*b)
        k=k+1;
    if (k>0) cout<<"Sunt numere pitagorice";
    else
            cout<<"Nu sunt numere pitagorice";
    return 0;
}
