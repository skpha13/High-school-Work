#include <iostream>
#include <fstream>

using namespace std;

ifstream f("partitiinumar2.in");
ofstream g("partitiinumar2.out");

int x[41],n,m,s;

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
        if(x[k]==x[i])return 0;
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
            if(s==n && k>=m)afis(k);
            else
                btk(k+1);
        s-=x[k];
    }
}

int main()
{
    f>>n>>m;
    x[0]=1;
    btk(1);
    return 0;
}
