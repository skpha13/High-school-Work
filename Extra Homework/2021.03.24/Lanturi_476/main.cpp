#include <iostream>
#include <fstream>

using namespace std;

ifstream f("lanturi.in");
ofstream g("lanturi.out");

int n,m,a[101][101],p,q,r,x[21],k,use[21];

void matrice()
{
    int i,x,y;
    for(i=1;i<=m;i++)
    {
        f>>x>>y;
        a[x][y]=a[y][x]=1;
    }
    f>>p>>q>>r;
}

void afis(int k)
{
    int i,ok=0;
    for(i=1;i<=k;i++)
        if(x[i]==r)ok=1;
    if(ok)
    {
        for(i=1;i<=k;i++)
            g<<x[i]<<" ";
        g<<'\n';
    }
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
                if(x[k]==q)
                    afis(k);
                else
                    btk(k+1);
            use[i]=0;
        }
}

int main()
{
    f>>n>>m;
    matrice();
    x[1]=p;
    use[p]=1;
    btk(2);
    return 0;
}
