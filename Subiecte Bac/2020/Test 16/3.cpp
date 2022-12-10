#include <iostream>
#include <fstream>

using namespace std;

ifstream f("bac.in");

int a[1000001],b[1000001],c[2000002],n,m,i,j,k;

int main()
{
	f>>m>>n;
	for(i=1;i<=m;i++)
		f>>a[++j];
    j=0;
	for(i=1;i<=n;i++)
    	f>>b[++j];
	i=j=1;
	if(a[i]<b[j]) c[++k]=a[i++];
	else
		if(a[i]>b[j]) c[++k]=b[j++];
	while(i<=m && j<=n)
		if(a[i]<b[j] && a[i]%2!=c[k]%2)
			c[++k]=a[i++];
		else
			if(a[i]>b[j] && b[j]%2!=c[k]%2)
				c[++k]=b[j++];
			else
				if(i<j)i++;
				else
					j++;
	while(i<=m)
		if(a[i-1]%2!=a[i]%2)
			c[++k]=a[i++];
		else
			i++;
	while(j<=n)
		if(b[j-1]%2!=b[j]%2)
			c[++k]=b[j++];
		else
			j++;
	for(i=1;i<=k;i++)
		cout<<c[i]<<" ";
	return 0;
}