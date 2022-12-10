#include <iostream>

using namespace std;

int n,k,a[21][21],i,j,x;

int main()
{
	cin>>n>>k;
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			cin>>a[i][j];
	for(i=1;i<k;i++)
	{
		x=a[k][i];
		a[k][i]=a[i][k];
		a[i][k]=x;
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}
