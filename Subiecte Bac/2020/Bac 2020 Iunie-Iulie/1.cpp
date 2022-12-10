#include <iostream>

using namespace std;

int a,b;

int suma(int,int);

int main()
{
    cout<<suma(20,12);
    return 0;
}

int suma(int a,int b)
{
    int i,s=0;
    if(a>b)
    {
        a+=b;
        b=a-b;
        a=a-b;
    }
    for(i=1;i<=a;i++)
        if(a%i==0 && b%i==0) s+=i;
    return s;
}