#include <iostream>

using namespace std;

int n,i,j,a[31][31],p=1,mn,ok,verif;

int main()
{
	cin>>n;
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			cin>>a[i][j];
	for(j=1;j<=n;j++)
	{
	    ok=0;
		mn=a[1][j];
		for(i=2;i<=n;i++)
		{
			if(mn>a[i][j] && i+j==n+1)
				mn=a[i][j],ok=1,verif=1;
		}
		if(ok)p*=mn;
	}
	if(verif)cout<<p%10;
	else
		cout<<"NU EXISTA";
	return 0;
}
