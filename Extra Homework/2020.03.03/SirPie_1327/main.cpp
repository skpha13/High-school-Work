#include <iostream>
#include <fstream>

using namespace std;

ifstream f("sirpie.in");
ofstream g("sirpie.out");

int x[10],n,v[10];

void ordonare(int n,int v[10])
{
    for(int i=1;i<n;i++)
        for(int j=i+1;j<=n;j++)
            if(v[i]>v[j])swap(v[i],v[j]);
}

int p(int a,int b)
{
    int r;
    while(b!=0)
    {
        r=a%b;
        a=b;
        b=r;
    }
    return a;
}

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
    if(k==n)
        for(i=1;i<k;i++)
        if(p(x[i],x[i+1])!=1)return 0;
    return 1;
}

void btk(int k)
{
    int i;
    for(i=1;i<=n;i++)
    {
        x[k]=v[i];
        if(valid(k))
            if(k==n)afis(k);
            else
                btk(k+1);
    }
}

int main()
{
    int i=0,y;
    f>>n;
    while(f>>y)
    {
        i++;
        v[i]=y;
    }
    ordonare(n,v);
    btk(1);
    return 0;
}
