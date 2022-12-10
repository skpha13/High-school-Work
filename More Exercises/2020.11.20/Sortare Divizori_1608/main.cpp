#include <iostream>
#include <algorithm>
#include <fstream>

using namespace std;

ifstream f("sortare_divizori.in");
ofstream g("sortare_divizori.out");

int a[1001],n,i,v[1001],j;

int nrdiv(int n)
{
    int i,k=0;
    for(i=1;i*i<n;i++)
        if(n%i==0)k+=2;
    if(i*i==n)k++;
    return k;
}

int main()
{
    f>>n;
    while(f>>a[++i])
        v[i]=nrdiv(a[i]);
    for(i=1;i<n;i++)
        for(j=i+1;j<=n;j++)
            if(v[i]<v[j])
            {
                swap(a[i],a[j]);
                swap(v[i],v[j]);
            }
            else
                if(v[i]==v[j] && a[i]>a[j])
                    swap(a[i],a[j]);

    for(i=1;i<=n;i++)
        g<<a[i]<<" ";
    return 0;
}
