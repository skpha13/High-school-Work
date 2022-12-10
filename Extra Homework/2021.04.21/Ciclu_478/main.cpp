#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

ifstream f("ciclu.in");
ofstream g("ciclu.out");

int n,m,a[101][101],p,x[21],k,use[21];

void matrice(int a[101][101])
{
    int i,x,y;
    for(i=1;i<=m;i++)
    {
        f>>x>>y;
        a[x][y]=a[y][x]=1;
    }
    f>>p;
}

void afis(int k)
{
    int i;
    for(i=1;i<=k;i++)
        g<<x[i]<<" ";
}

int valid(int k)
{
    if(a[x[k]][x[k-1]]!=1 || a[x[k-1]][x[k]]!=1)
        return 0;
    return 1;
}

void btk(int k)
{
    int i;
    for(i=1;i<=n;i++)
        if(!use[i])
        {
            use[i]=1;
            x[k]=i;
            if(valid(k))
                if(x[k]==p && k>3)
                {
                    afis(k);
                    exit(0);
                }
                else
                    btk(k+1);
            use[i]=0;
        }
}

int main()
{
    f>>n>>m;
    matrice(a);
    x[1]=p;
    btk(2);
    return 0;
}
