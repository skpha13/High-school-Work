#include <iostream>
#include <fstream>

using namespace std;

ifstream f("platou2.in");
ofstream g("platou2.out");

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
    while (i<n){
        j=i+1;
        while (a[j]>a[j-1] && j<=n){
            j++;
            if(j-i>lmax){
                lmax=j-i;
                pmax=i;
            }
        }
        i=j;
    }
    g<<lmax;
    f.close();
    g.close();
    return 0;
}
