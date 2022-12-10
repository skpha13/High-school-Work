#include <iostream>

using namespace std;

int n,i,j;
float a[52][51],v[51];

int main()
{
	cin>>n;
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++) 
		{
			cin>>a[i][j];
			v[j]+=a[i][j];
		}
	cout<<endl;
	for(j=1;j<=n;j++)
	{
		for(i=n+1;i>n/2;i--)
			a[i][j]=a[i-1][j];
		a[n/2+1][j]=v[j]/=n;
	}
	for(i=1;i<=n+1;i++)
	{
		for(j=1;j<=n;j++) cout<<a[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}