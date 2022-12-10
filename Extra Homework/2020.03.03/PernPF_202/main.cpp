#include <iostream>
#include <fstream>

using namespace std;

ifstream f("permpf.in");
ofstream g("permpf.out");

int x[10],n;

void afis(int k)
{
    int i;
    for(i=1;i<=k;i++)
        g<<x[i]<<" ";
    g<<endl;
}

int valid(int k)
{
    int i;
    for(i=1;i<k;i++)
        if(x[k]==x[i])return 0;
    if(x[k]==k)return 0;
    return 1;
}

void btk(int k)
{
    int i;
    for(i=1;i<=n;i++)
    {
        x[k]=i;
        if(valid(k))
            if(k==n)afis(k);
            else
                btk(k+1);
    }
}

int main()
{
    f>>n;
    btk(1);
    return 0;
}
