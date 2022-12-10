#include <iostream>

using namespace std;

int n,i,j,a[11][11],s;

int main()
{
	cin>>n;
	for(j=1;j<=n;j++)
		a[1][j]=1,a[j][1]=a[j][n]=1;
	for(i=2;i<=n;i++)
	{
		s=0;
		for(j=2;j<=n-1;j++)
		{
			s=a[i-1][j-1]+a[i-1][j]+a[i-1][j+1];
			a[i][j]=s;
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}