#include <iostream>
#include <fstream>

using namespace std;

ifstream f("bac.in");
ofstream g("bac.out");

void P(int &n, int c)
{
	int m=0,p=1;
	while(n)
	{
		if(n%10!=c)
		{
			m=(n%10)*p+m;
			p*=10;
		}
		n/=10;	
	}
	n=m;
}

int main()
{
	int n,c=1;
	while(f>>n)
	{
		for(c=1;c<=9;c+=2)
			P(n,c);
		if(n)
			g<<n<<" ";
	}	
	return 0;
}