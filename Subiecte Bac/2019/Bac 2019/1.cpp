#include <iostream>

using namespace std;

int n;

void Impare(int &n)
{
    int c,m=0,p=1;
    while(n)
    {
        c=n%10;
        if(c%2==1) c--;
        if(c!=0 || n/10!=0)
        {
            m=m+c*p;
            p*=10;
        }
        n/=10;
    }
    n=m;
}

int main()
{
    n=16;
    Impare(n);
    cout<<n;
    return 0;
}