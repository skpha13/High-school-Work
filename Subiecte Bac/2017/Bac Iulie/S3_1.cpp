#include <iostream>

using namespace std;

int n;

void duplicare(int &n)
{
	int m=n,p=1,c;
	n=0;
	while(m)
	{
		c=m%10;
		if(c%2==0)
		{
			n=n+c/2*p+c*p*10;
			p*=100;
		}
		else
			{
				n=n+c*p;
				p*=10;
			}
		m/=10;
	}
}

int main()
{
	cin>>n;
	duplicare(n);
	cout<<n;
	return 0;
}