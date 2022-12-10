#include <iostream>
#include <fstream>

using namespace std;

ifstream f("platou1.in");
ofstream g("platou1.out");

int n,a[1001],i,j,lmax,pmax,x,y;

int main()
{
    while(f>>x)
    {
        i++;
        a[i]=x;
    }
    n=i;
    i=1;
    while (i<n){
        j=i+1;
        while (a[j]==a[j-1] && j<=n){
            j++;
            if(j-i>=lmax){
                if(a[j-1]<a[pmax])
                {
                    y=a[j-1];
                }
                lmax=j-i;
                pmax=i;
            }
        }
        i=j;
    }
    g<<lmax<<" "<<y;
    f.close();
    g.close();
    return 0;
}
