#include <iostream>
#include <fstream>

using namespace std;

ifstream f("platou3.in");
ofstream g("platou3.out");

int n,a[1001],i,j,lmax,pmax,x,y;

int main()
{
    f>>x;
    n=x;
    while(f>>x)
    {
        i++;
        a[i]=x;
    }
    i=1;
    while (i<n)
    {
        j=i+1;
            while (a[j-1]>=0 && a[j]>=0 && j<=n)
            {
                j++;
                if(j-i>lmax)
                    lmax=j-i;
            }
        i=j;
    }
    g<<lmax;
    f.close();
    g.close();
    return 0;
}
