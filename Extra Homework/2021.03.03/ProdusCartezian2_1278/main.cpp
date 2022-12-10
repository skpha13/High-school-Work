#include <iostream>
#include <fstream>

using namespace std;

ifstream f("produscartezian2.in");
ofstream g("produscartezian2.out");

int x[20],n,v[20],y;

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
    for(i=1;i<=v[k];i++)
    {
        x[k]=i;
        if(k==n)afis(k);
        else
            btk(k+1);
    }
}

int main()
{
    int i=0;
    f>>n;
    while(f>>y)
    {
        i++;
        v[i]=y;
    }
    btk(1);
    return 0;
}
