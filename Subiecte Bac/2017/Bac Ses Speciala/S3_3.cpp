#include <iostream>

using namespace std;

int a,b;

void identice(int a, int b)
{
	int i,x,ok,c;
	for(i=a;i<=b;i++)
	{
		x=i;
		ok=1;
		c=x%10; x/=10;
		while(x && ok)
		{
			if(c!=x%10)ok=0;
			x/=10;
		}
		if(ok) cout<<i<<" ";
	}
}

int main()
{
	cin>>a>>b;
	identice(a,b);
	return 0;
}