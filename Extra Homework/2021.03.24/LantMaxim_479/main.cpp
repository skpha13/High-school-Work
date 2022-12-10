#include <iostream>
#include <fstream>

using namespace std;

ifstream f("lantmaxim.in");
ofstream g("lantmaxim.out");

int n,m,a[101][101],p,q,x[21],k,use[21],v[21],mx;

void matrice()
{
    int i,x,y;
    for(i=1;i<=m;i++)
    {
        f>>x>>y;
        a[x][y]=a[y][x]=1;
    }
    f>>p>>q;
}

void afis(int k)
{
    int i;
    mx=k;
    for(i=1;i<=k;i++)
        v[i]=x[i];
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
                if(x[k]==q && k>mx)
                    afis(k);
                else
                    btk(k+1);
            use[i]=0;
        }
}

int main()
{
    int i;
    f>>n>>m;
    matrice();
    x[1]=p;
    use[p]=1;
    btk(2);
    for(i=1;i<=mx;i++)
        g<<v[i]<<" ";
    return 0;
}
