#include <iostream>

using namespace std;

int n,m,i,j,a[51][51];

int main()
{
	cin>>n>>m;
	for(i=1;i<=n;i++)
		for(j=1;j<=m;j++)
			cin>>a[i][j];
	for(i=1;i<=n;i++) a[i][1]=a[i][m]=a[n][m];
	for(i=1;i<=m;i++) a[1][i]=a[n][i]=a[n][m];
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}