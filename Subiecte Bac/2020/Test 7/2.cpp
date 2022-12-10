#include <iostream>

using namespace std;

int a[21][21],m,n,i,j;

int main()
{
	cin>>m>>n;
	for(i=1;i<=m;i++)
		for(j=1;j<=n;j++)
			cin>>a[i][j];
	for(i=1;i<=m;i++)
		for(j=1;j<=m;j++)
            if(a[i][1]==a[j][n])
                cout<<a[i][1]<<" ";
	return 0;
}
