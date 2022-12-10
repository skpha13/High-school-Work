#include <iostream>
#include <fstream>

using namespace std;

ifstream f("combinari.in");
ofstream g("combinari.out");

int x[15],n,m;

void afis(int k)
{
    int i;
    for(i=1;i<=k;i++)
        g<<x[i]<<" ";
    g<<endl;
}

int valid(int k)
{
    int i;
    for(i=1;i<k;i++)
        if(k>1 && x[k]<=x[k-1])return 0;
    return 1;
}

void btk(int k)
{
    int i;
    for(i=1;i<=n;i++)
    {
        x[k]=i;
        if(valid(k))
            if(k==m)afis(k);
                else
                    btk(k+1);
    }
}

int main()
{
    f>>n>>m;
    btk(1);
    return 0;
}
