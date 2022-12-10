#include <iostream>
#include <fstream>

using namespace std;

ifstream f("binefrunze1.in");
ofstream g("binefrunze1.out");

int v[10001],a[1001];

void creare(int a[])
{
    int i=0,n,j=0;
    while(f>>v[++i])
    n=i;
    for(i=1;i<=n-2;i++)
        if(v[i]!=0 && v[i+1]!=0)
            a[++j]=v[i];
        else
            if(v[i]!=0 && v[i+1]==0 && v[i+2]!=0)
                a[++j]=v[i];
    for(i=1;i<j;i++)
        for(int k=i+1;k<=j;k++)
            if(a[i]<a[k])swap(a[i],a[k]);
    for(i=1;i<=j;i++)
        g<<a[i]<<" ";
}

int main()
{
    creare(a);
    return 0;
}
