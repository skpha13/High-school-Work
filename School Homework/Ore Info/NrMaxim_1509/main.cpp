#include <iostream>

using namespace std;

int nrmaxim(int n)
{
    int c,d=1,x=10,aux=n,nr=n;
    while(aux/10)
    {
        d*=10;
        aux/=10;
    }
    while(d)
    {
        c=((n%x)*d)+n/x;
        if(c>nr)
            nr=c;
        x*=10;
        d/=10;
    }
    return nr;
}

