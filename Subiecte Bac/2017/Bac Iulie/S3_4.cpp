#include <iostream>
#include <fstream>

using namespace std;

ifstream f("bac.txt");

int x,y,nr,l=1,lmax;

int main()
{
	f>>x;
	while(f>>y)
	{
		if(x%2==0 && y%2==0)
		{
			l++;
			if(l>lmax) 
			{
				lmax=l;
				nr=1;
			}
			else if(l==lmax) nr++;
		}
		else l=1;
		x=y;
	}
	cout<<nr;
	f.close();
	return 0;
}