#include <iostream>
#include <fstream>

using namespace std;

ifstream f("aranjamente.in");
ofstream g("aranjamente.out");

int x[9],n,k;

void afis(int v)
{
    int i;
    for(i=1;i<=v;i++)
        g<<x[i]<<" ";
    g<<endl;
}

int valid(int v)
{
    int i;
    for(i=1;i<v;i++)
        if(x[v]==x[i])return 0;
    return 1;
}

void btk(int v)
{
    int i;
    for(i=1;i<=n;i++)
    {
        x[v]=i;
        if(valid(v))
            if(v==k)afis(v);
            else
                btk(v+1);
    }
}

int main()
{
    f>>n>>k;
    btk(1);
    return 0;
}
