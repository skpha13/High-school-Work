#include <iostream>
#include <fstream>

using namespace std;

ifstream f("bac.in");

int x,y,n,v[30001],ls,ld,m,i;

int main()
{
	f>>n;
	for(i=1;i<=n;i++)
		f>>v[i];
	f>>x>>y;
	ls=1;ld=n;
	while(ls<=ld)
	{
		m=(ls+ld)/2;
		if(v[m]<=y) ld=m-1;
		else ls=m+1;
	}
	if(ls<=n && v[ls]>=x) cout<<v[ls];
	else cout<<"nu exista";
	return 0;
}