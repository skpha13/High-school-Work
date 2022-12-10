#include <iostream>

using namespace std;

int x,y,rez;

void imog(int x,int y,int &rez)
{
	int a=0,b=0,p=1,ok=0;
	rez=0;
	while(x)
	{
		if(x%2!=0)
			a=a*10+x%10;
		x/=10;
	}
	while(y)
	{
		if(y%2!=0)
		{
			b=(y%10)*p+b;
			p*=10;
			ok=1;
		}
		y/=10;
	}
	if(a==b && ok)rez=1;
}

int main()
{
	cin>>x>>y;
	imog(x,y,rez);
	cout<<rez;
	return 0;
}