#include <iostream>
#include <fstream>

using namespace std;

ifstream f("bac.in");

int m,n,a,b,x,y,i,ok;

int main()
{
	f>>m>>n>>a;
	for(i=2;i<=m;i++) f>>b;
	f>>x; i=1;
	while(f>>y && !ok)
	{
		i++;
		if(x<a && b<y) ok=1;
		x=y;
	}
	if(ok) cout<<i;
	else cout<<"imposibil";
	f.close();
	return 0;
}