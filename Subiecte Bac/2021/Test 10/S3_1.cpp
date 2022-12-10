#include <iostream>
 
using namespace std;

int x,y;

int nrdiv(int x)
{
	int i,s=0;
	for(i=1;i<=x;i++)
		if(x%i==0)
			s+=i;
	return s;
}

int armonie(int x, int y)
{
	int a;
	if(x>y)
	{
		a=x;
		x=y;
		y=a;
	}
	if(x+y>nrdiv(x) && x+y<nrdiv(y))
		return 1;
	return 0;
}

int main()
{
	cout<<armonie(8,12);
	return 0;
}