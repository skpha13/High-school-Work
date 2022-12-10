#include <iostream>
#include <fstream>

using namespace std;

ifstream f("gengraf.in");
ofstream g("gengraf.out");

int n,m,a[11][11],x[121],k,c;

void afis()
{
    int i,j;
    k=1;
    for(i=1;i<=n;i++)
        for(j=i+1;j<=n;j++)
        {
            a[i][j]=a[j][i]=x[k];
            k++;
        }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            g<<a[i][j]<<" ";
        g<<endl;
    }
    g<<endl;
}

void btk(int k)
{
    int i;
    for(i=0;i<=1;i++)
    {
        x[k]=i;
        if(k==m)afis();
        else
            btk(k+1);
    }
}

int main()
{
    int i;
    f>>n;
    m=n*(n-1)/2;
    c=1;
    for(i=1;i<=m;i++)
        c*=2;
    g<<c<<endl;
    btk(1);
    return 0;
}
