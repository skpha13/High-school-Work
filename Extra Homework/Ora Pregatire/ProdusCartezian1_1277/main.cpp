#include <iostream>
#include <fstream>

using namespace std;

ifstream f("produscartezian1.in");
ofstream g("produscartezian1.out");

int x[7],n,m;

void afis(int k)
{
    int i;
    for(i=1;i<=k;i++)
        g<<x[i]<<" ";
    g<<endl;
}

void btk(int k)
{
    int i;
    for(i=1;i<=n;i++)
    {
        x[k]=i;
        if(k==m)afis(k);
        else
            btk(k+1);
    }
}

int main()
{
    f>>n>>m;
    btk(1);
    return 0;
}
