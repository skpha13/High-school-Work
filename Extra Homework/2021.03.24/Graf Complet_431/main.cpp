#include <iostream>
#include <fstream>

using namespace std;

ifstream f("graf_complet.in");
ofstream g("graf_complet.out");

int n,v[51][51],G;

void zero(int v[51][51])
{
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            v[i][j]=0;
}

int verif(int v[51][51],int n)
{
    int i,j,s,m=0;
    for(i=1;i<=n;i++)
    {
        s=0;
        for(j=1;j<=n;j++)
        {
            s+=v[i][j];
            m+=v[i][j];
        }
        if(s!=n-1)return 0;
    }
    if(m/2!=n*(n-1)/2)return 0;
    return 1;
}

void grafcomplet(int v[51][51])
{
    int k,i,j;
    for(k=1;k<=n;k++)
    {
        f>>G;
        for(i=1;i<=G;i++)
            for(j=1;j<=G;j++)
                f>>v[i][j];
        if(verif(v,G))g<<"DA"<<endl;
        else
            g<<"NU"<<endl;
        zero(v);
    }
}

int main()
{
    f>>n;
    grafcomplet(v);
    return 0;
}
