#include <iostream>

using namespace std;

int a[21][21],m,n,i,j,v[21];

int main()
{
	cin>>m>>n;
	for(i=1;i<=m;i++)
		for(j=1;j<=n;j++)
			cin>>a[i][j];
	for(i=2;i<=m;i++)
		v[a[i][n]]++;
	for(j=1;j<=n-1;j++)
		v[a[1][j]]++;
	for(i=0;i<=20;i++)
		if(v[i]==2)
			cout<<i<<" ";
	return 0;
}