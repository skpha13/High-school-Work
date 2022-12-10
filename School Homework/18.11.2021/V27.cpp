#include <iostream>
#include <fstream>

using namespace std;

ifstream f("NUMERE.IN");

int n;
float x,y,a;

int main()
{
	f>>n;
	f>>x;
	while(f>>a)
		y=a;
	x=(int)x;
	cout<<x<<" ";
	if(y==(int)y)cout<<y;
	else
		cout<<(int)y+1;
	return 0;
}
