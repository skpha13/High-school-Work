#include <iostream>
#include <fstream>

using namespace std;

ifstream f("subgraf.in");
ofstream g("subgraf.out");

int n,v[101][101];

int prim(int n)
{
    if(n<2)return 0;
    for(int i=2;i*i<=n;i++)
        if(n%i==0)return 0;
    return 1;
}

void matrice(int v[101][101])
{
    int i,k,p;
    while(f>>k>>p)
    {
        v[k][p]=1;
        v[p][k]=1;
    }
}

int subgraf(int v[101][101])
{
    int i,j,k=0;
    for(i=1;i<=n;i++)
        if(prim(i))
            for(j=1;j<=n;j++)
            {
                v[i][j]=0;
                v[j][i]=0;
            }
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            if(v[i][j]==1)k++;
    return k/2;
}

int main()
{
    f>>n;
    matrice(v);
    g<<subgraf(v);
    return 0;
}
