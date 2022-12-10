#include <iostream>

using namespace std;

int n,s,v[51],k,i;

int main()
{
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>v[i];
		s+=v[i];
	}
	for(i=1;i<=n;i++)
		if(v[i]==(s-v[i])/(n-1))
			k++;
	cout<<k;
	return 0;
}
