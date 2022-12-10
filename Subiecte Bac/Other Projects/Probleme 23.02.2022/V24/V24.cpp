#include <iostream>
#include <fstream>

using namespace std;

ifstream f("bac.txt");

int a,b,n,v[30001],ls,ld,m,i;

int main()
{
	f>>n;
	for(i=1;i<=n;i++)
		f>>v[i];
	f>>a>>b;
	ls=1;ld=n;
	while(ls<=ld)
	{
		m=(ls+ld)/2;
		if(v[m]>=a) ld=m-1;
		else ls=m+1;
	}
	if(ls<=n && v[ls]<=b)cout<<v[ls];
	else cout<<"NU";
	return 0;
}