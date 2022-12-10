#include <iostream>

using namespace std;

int n,p;

void prodprim(int n,int &p)
{
    int f=2,ok;
    p=1;
	while(n>1)
	{
	    ok=0;
		while(n%f==0)
        {
            ok=1;
            n/=f;
        }
        if(ok) p*=f;
		f++;
	}
}

int main()
{
	prodprim(2000,p);
	cout<<p;
	return 0;
}
