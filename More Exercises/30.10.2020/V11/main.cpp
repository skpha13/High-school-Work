#include <iostream>

using namespace std;

int sum(int x)
{
	int d,s=0;
	for(d=1;d<=x;d++)
		if(x%d==0)
			s+=d;
	return s;
}

int main()
{
    int x;
	cin>>x;
	cout<<sum(x);
    return 0;
}