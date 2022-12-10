#include <iostream>

using namespace std;

int n,d,p;

void putere(int n,int &d,int &p)
{
	int f=2,k;
	p=0;
	while(n>1)
	{
		k=0;
		while(n%f==0)
		{
			n/=f;
			k++;
		}
		if(k>=p)
		{
			p=k;
			d=f;
		}
		f++;
	}
}

int main()
{
	cin>>n;
	putere(n,d,p);
	cout<<d<<" "<<p;
	return 0;
}
