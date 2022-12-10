#include <iostream>

using namespace std;

int n,i,j,a[21][21],k,p;

int main()
{
	cin>>n;
	p=1;
	for(i=1;i<=n;i++)
	{
		k=p;
		for(j=1;j<=n;j++)
			a[i][j]=k,k++;
		p++;
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}