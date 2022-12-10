#include <iostream>
#include <fstream>

using namespace std;

ifstream f("BAC.TXT");

int n,k,i,ind,mx,s,v[10001];

int main()
{
	f>>n>>k;
	for(i=1;i<=n;i++)
		f>>v[i];
	for(i=1;i<=k;i++)
		s+=v[i];
	mx=s;
	for(i=k+1;i<=n;i++)
	{
		s+=v[i];
		s-=v[i-k];
		if(mx<s)
			mx=s,ind=i-k+1;
	}
	cout<<ind;
	return 0;
}