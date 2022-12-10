#include <iostream>

using namespace std;

int n;

int nrDivPrim(int n)
{
    int f=2,p,nr=0;
    while(n>1)
    {
        p=0;
        while(n%f==0)
        {
            n/=f;
            p++;
        }
        if(p%2==1)nr++;
        f++;
    }
    return nr;
}

int main()
{
    cout<<nrDivPrim(9000);
    return 0;
}