#include <iostream>

using namespace std;

int m,n,i,j,a[101][101],p,v[101],mx;

int main()
{
	cin>>m>>n;
	for(i=1;i<=m;i++)
		for(j=1;j<=n;j++)
			cin>>a[i][j];
	for(j=1;j<=n;j++)
	{
		p=1;
		for(i=1;i<=m;i++)
            if(a[i][j]==0)
               {
                   p=0;
                   break;
               }
            else
                p*=a[i][j];
		if(mx<p)
			mx=p;
		v[j]=p;
	}
	for(i=1;i<=n;i++)
		if(mx==v[i])cout<<i<<" ";
	return 0;
}
