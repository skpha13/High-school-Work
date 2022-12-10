#include <iostream>

using namespace std;

int n,a[5][5];

int main()
{
	cin>>n;
	for(j=1;j<=4;j++)
	{
		for(i=1;i<=4;i++)
			a[i][j]=n%10;
		n/=10;
	}
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=4;j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}