#include <iostream>

using namespace std;

int n,k,i,j,a[401][401],p;

int main()
{
	cin>>n>>k;
	for(i=1;i<=n;i++)
	{
		p=i;
		for(j=1;j<=n*k;j++)
		{
			a[i][j]=p;
            if(j%k==0)p++;
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n*k;j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}
