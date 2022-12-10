#include <iostream>
#include <fstream>

using namespace std;

ifstream f("partitiinr.in");
ofstream g("partitiinr.out");

int x[41],n,s;

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
    s=0;
    for(i=1;i<=k;i++)
        s+=x[i];
    for(i=1;i<k;i++)
    {
        if(x[k]==x[i])return 0;
        if(abs(x[k]-x[k-1])<2)return 0;
    }
    if(s<=n)return 1;
    return 0;
}

void btk(int k)
{
    int i;
    for(i=x[k-1];i<=n;i++)
    {
        x[k]=i;
        s+=x[k];
        if(valid(k))
            if(s==n)afis(k);
            else
                btk(k+1);
        s-=x[k];
    }
}

int main()
{
    f>>n;
    x[0]=1;
    btk(1);
    return 0;
}
