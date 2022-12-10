#include <iostream>

using namespace std;

int n,p;

int putere(int n,int p)
{
	int i,ok=1,k=0;
	if(p<2)ok=0;
	for(i=2;i*i<=p;i++)
		if(p%2==0)
		{
			ok=0;
			break;
		}
	if(ok==0) return -1;
	else
	{
		while(n%p==0)
		{
			k++;
			n/=p;
		}
		return k;
	}
}
 
int main()
{
	cout<<putere(80,2);
	return 0;
}