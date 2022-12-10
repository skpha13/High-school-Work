#include <iostream>

using namespace std;

int n,a,b;

void fii(int n)
{
	int i;
	for(i=n;i>=1;i--)
		if(n%i==0 && i>n/i)
			cout<<'('<<i<<" "<<n/i<<')'<<" ";
}

int main()
{
	fii(2);
	return 0;
}
