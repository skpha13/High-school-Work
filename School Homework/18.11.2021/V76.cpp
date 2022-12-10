#include <iostream>
#include <fstream>

using namespace std;

ifstream f("BAC.TXT");

int n,a,v[10001],x,i;

int main()
{
	f>>n;
	for(i=1;i<=n;i++)
	{
		f>>x;
		v[x]=1;
	}
	f>>a;
	if(v[a]==1)cout<<"DA";
	else
		cout<<"NU";
	return 0;
}
