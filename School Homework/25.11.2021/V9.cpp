#include <iostream>

using namespace std;

int n,i,j,a[24][24];

int main()
{
	cin>>n;
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			cin>>a[i][j];
	for(j=1;j<=n;j++)
		cout<<a[1][j]<<" ";
	for(i=1;i<=n;i++)
		cout<<a[i][n]<<" ";
	for(j=n;j>=1;j--)
		cout<<a[n][j]<<" ";
	for(i=n;i>=1;i--)
		cout<<a[i][1]<<" ";
	return 0;
}