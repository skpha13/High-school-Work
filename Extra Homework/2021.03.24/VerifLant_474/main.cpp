#include <iostream>
#include <fstream>

using namespace std;

ifstream f("veriflant.in");
ofstream g("veriflant.out");

int n,m,v[101][101],k,p,a[201];

void matrice(int v[101][101])
{
    int i;
    for(i=1;i<=m;i++)
    {
        f>>k>>p;
        v[k][p]=1;
        v[p][k]=1;
    }
    f>>k;
}

void veriflant(int v[101][101])
{
    int i,j,p,ok,l;
    for(p=1;p<=k;p++)
    {
        f>>l;
        for(i=1;i<=l;i++)
            f>>a[i];
        ok=1;
        for(i=1;i<l;i++)
            if(v[a[i]][a[i+1]]==0)
                ok=0;
        if(!ok)
            g<<"NU"<<endl;
        else
        {
            for(i=1;i<l;i++)
                for(j=i+1;j<=l;j++)
                    if(a[i]==a[j])
                        ok=0;
            if(ok)
                g<<"ELEMENTAR"<<endl;
            else
                g<<"NEELEMENTAR"<<endl;
        }
    }
}

int main()
{
    f>>n>>m;
    matrice(v);
    veriflant(v);
    return 0;
}
