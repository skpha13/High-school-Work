#include <iostream>
#include <fstream>

using namespace std;

ifstream f("listavecini.in");
ofstream g("listavecini.out");

int n,i,j,v[101][101],a[101];

void adiacenta(int v[101][101])
{
    while(f>>i>>j)
        {
            v[i][j]=1;
            v[j][i]=1;
        }
}

void nrvecini(int a[101])
{
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            if(v[i][j]==1)a[i]++;
}

void vecini(int v[101][101])
{
    for(i=1;i<=n;i++)
    {
        g<<a[i]<<" ";
        for(j=1;j<=n;j++)
            if(v[i][j]==1)g<<j<<" ";
        g<<endl;
    }
}

int main()
{
    f>>n;
    adiacenta(v);
    nrvecini(a);
    vecini(v);
    return 0;
}
