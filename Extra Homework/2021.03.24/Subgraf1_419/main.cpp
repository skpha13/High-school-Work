#include <iostream>
#include <fstream>

using namespace std;

ifstream f("subgraf1.in");
ofstream g("subgraf1.out");

int n,v[101][101];

void matrice(int v[101][101])
{
    int k,p;
    while(f>>k>>p)
    {
        v[k][p]=1;
        v[p][k]=1;
    }
}

int gradmin(int v[101][101])
{
    int i,j,mn=n,s=0;
    for(i=1;i<=n;i++)
    {
        s=0;
        for(j=1;j<=n;j++)
            s+=v[i][j];
        if(mn>s)mn=s;
    }
    return mn;
}

int subgraf(int v[101][101])
{
    int i,j,k=0,s=0,mn;
    mn=gradmin(v);
    for(i=1;i<=n;i++)
    {
        s=0;
        for(j=1;j<=n;j++)
            s+=v[i][j];
        if(s==mn)
            for(j=1;j<=n;j++)
            {
                v[i][j]=0;
                v[j][i]=0;
            }
    }
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            if(v[i][j]==1)
                k++;
    return k/2;
}

int main()
{
    f>>n;
    matrice(v);
    g<<subgraf(v);
    return 0;
}
