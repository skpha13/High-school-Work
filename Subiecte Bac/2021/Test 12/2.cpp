#include <iostream>

using namespace std;

int n,k,a[21][21],x,i,j;

int main()
{
    cin>>n>>k;
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			cin>>a[i][j];
    cout<<endl;
    x=a[k][n-k];
    for(i=n-k;i>1;i--)
        a[k][i]=a[k][i-1];
    a[k][1]=x;
    for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
    return 0;
}