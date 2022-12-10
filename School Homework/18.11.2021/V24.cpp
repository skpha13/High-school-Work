#include <iostream>
#include <fstream>

using namespace std;

ifstream f("bac.txt");

int n,a,b,x,mn=10000,ok;

int main()
{
	f>>n>>a>>b;
	while(f>>x)
		if(x>=a && x<=b && mn>x)
			mn=x,ok=1;
	if(ok)cout<<mn;
	else
		cout<<"NU";
	return 0;
}