#include <iostream>
#include <fstream>

using namespace std;

ifstream f("izolate.in");
ofstream g("izolate.out");

int n,v[101][101],k;

void matrice(int v[101][101])
{
    int i,j,k,p;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
        {
            f>>k>>p;
            v[k][p]=1;
            v[p][k]=1;
        }
}

void izolate(int v[101][101])
{
    int i,j,s;
    for(i=1;i<=n;i++)
    {
        s=0;
        for(j=1;j<=n;j++)
            s+=v[i][j];
        if(s==0)
            k++;
    }
    g<<k<<" ";
    for(i=1;i<=n;i++)
    {
        s=0;
        for(j=1;j<=n;j++)
            s+=v[i][j];
        if(s==0)
            g<<i<<" ";
    }
}

int main()
{
    f>>n;
    matrice(v);
    izolate(v);
    return 0;
}
