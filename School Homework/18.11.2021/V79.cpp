#include <iostream>
#include <fstream>

using namespace std;

ifstream f("numere.in");

int n,v[101],x,ok,i;

int main()
{
	f>>n;
	for(i=1;i<=n;i++)
	{
		f>>x;
		v[x]=1;
	}
	for(i=1;i<=100;i++)
		if(v[i]==0)
		{
			cout<<i<<" ";
			ok=1;
		}
	if(!ok)cout<<"NU LIPSESTE NICIUN NUMAR";
	return 0;
}
