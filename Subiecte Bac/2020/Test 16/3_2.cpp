#include <iostream>
#include <fstream>

using namespace std;

ifstream f("bac.in");

int a[1000001],v[100000001],n,m,i,j,x,mx;

int main()
{
	f>>m>>n;
	while(f>>x)
    {
        if(mx<x) mx=x;
        v[x]++;
    }
    for(i=1;i<=mx;i++)
        if(v[i])
            if(j==0) a[++j]=i;
            else
                if(i%2!=a[j]%2) a[++j]=i;
    for(i=1;i<=j;i++)
        cout<<a[i]<<" ";
	return 0;
}