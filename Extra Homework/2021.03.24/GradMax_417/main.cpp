#include <iostream>
#include <fstream>

using namespace std;

ifstream f("gradmax.in");
ofstream g("gradmax.out");

int n,v[101][101],a[101];

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

void gradmax(int v[101][101])
{
    int i,j,s,mx=0,k=0;
    for(i=1;i<=n;i++)
    {
        s=0;
        for(j=1;j<=n;j++)
            s+=v[i][j];
        a[i]=s;
    }
    for(i=1;i<=n;i++)
        if(mx<a[i])
        {
            mx=a[i];
            k=1;
        }
        else
            if(mx==a[i])
                k++;
    g<<k<<" ";
    for(i=1;i<=n;i++)
        if(a[i]==mx)g<<i<<" ";
}

int main()
{
    f>>n;
    matrice(v);
    gradmax(v);
    return 0;
}
