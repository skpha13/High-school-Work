#include <iostream>
#include <fstream>

using namespace std;

ifstream f("siruri.in");
ofstream g("siruri.out");

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
        if(x[i+1]-x[i]>2 || x[i+1]<=x[i])return 0;
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
