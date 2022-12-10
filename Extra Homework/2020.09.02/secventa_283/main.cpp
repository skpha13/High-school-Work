#include <iostream>
#include <fstream>

using namespace std;

ifstream f("secventa.in");
ofstream g("secventa.out");

int n,i,a[100001],l,lmax,ok,p,u,x,j,s,smax;

int main()
{
    f>>n;
    while(f>>x)
    {
        i++;
        a[i]=x;
    }
    for(i=2;i<=n-1;i++)
    {
        ok=0;
        if(a[i-1]%2!=a[i]%2)ok=1;
        if(ok)
        {
            l++;
            s+=a[i];
            if(l>lmax)
            {
                lmax=l;
                u=i;
                smax=s;
            }
            if(l==lmax)
            {
                if(s>=smax)
                {
                    smax=s;
                    s=a[i];
                }
                lmax=l;
                u=i;
            }
        }
        else
            l=0;
    }
    g<<u-lmax<<" "<<u;
    return 0;
}
