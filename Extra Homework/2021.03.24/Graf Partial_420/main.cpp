#include <iostream>
#include <fstream>

using namespace std;

ifstream f("graf_partial.in");
ofstream g("graf_partial.out");

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

int graf_partial(int v[101][101])
{
    int i,j,k=0;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            if(i%2==j%2)
            {
                v[i][j]=0;
                v[j][i]=0;
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
    g<<graf_partial(v);
    return 0;
}
