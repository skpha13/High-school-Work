#include <iostream>
#include <fstream>

using namespace std;

ifstream f("adiacenta1.in");
ofstream g("adiacenta1.out");

int v[101][101],k,p,n,i,j;

void adiacenta(int v[101][101])
{
    while(f>>k>>p)
        {
            v[k][p]=1;
            v[p][k]=1;
            if(k>p)
            {
                if(k>n)n=k;
            }
            else
                {
                    if(p>n)n=p;
                }
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
    adiacenta(v);
    afisare(v);
    return 0;
}
