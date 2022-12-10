#include <iostream>

using namespace std;

int n,i,j,a[6][6],k;

int main()
{
	cin>>n;
	for(i=1;i<=n;i++)
	{
		k=i;
		for(j=1;j<=n;j++)
		{
			if(k>n)k=1;
			a[i][j]=k;
			k++;
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
