#include <iostream>
#include <fstream>

using namespace std;

ifstream f("bac.txt");

int x,v[100000],i,j,r,min1=1000001,min2=1000001,n;

int main()
{
	while(f>>x)
	{
		v[x]=1;
		if(n<x) n=x;
		if(min1>x)
		{
			min2=min1;
			min1=x;
		}
		else if(min2>x && x!=min1) min2=x;
	}
	r=min2-min1;
	for(i=1;i<=n;i++)
		if(v[i])
		{
			for(j=i+1;j<=n && v[j]==0;j++){}
			if(v[j] && j-i!=r)
			{
				cout<<"NU";
				return 0;
			}
			i=j;
		}
	cout<<r;
	f.close();
	return 0;
}