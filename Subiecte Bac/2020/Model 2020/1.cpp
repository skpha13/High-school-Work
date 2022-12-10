#include <iostream>

using namespace std;

int n,d;

void duplicare(int n, int &d)
{
    int c,p=1,ok=0;
    d=0;
    while(n)
    {
        c=n%10;
        if(c%2==1)
        {
            d=d+c*p;
            p*=10;
            ok=1;
        }
        d=d+c*p;
        p*=10;
        n/=10;
    }
    if(!ok)d=-1;
}

int main()
{
    duplicare(2019,d);
    cout<<d;
    return 0;
}