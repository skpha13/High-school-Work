#include <iostream>
#include <fstream>

using namespace std;

ifstream f("adiacenta.in");
ofstream g("adiacenta.out");

int n,m,i,j,v[101][101],k,p;

void adiacenta(int v[101][101])
{
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
        {
            f>>k>>p;
            v[k][p]=1;
            v[p][k]=1;
        }
}

void afisare(int v[101][101])
{
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            g<<v[i][j]<<" ";
        g<<endl;
    }

}

int main()
{
    f>>n>>m;
    adiacenta(v);
    afisare(v);
    return 0;
}
