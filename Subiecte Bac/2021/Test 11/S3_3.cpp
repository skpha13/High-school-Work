#include <iostream>
#include <fstream>

using namespace std;

ofstream f("bac.out");

int x,y,n,i;

int main()
{
    cin>>x>>y;
	n=(y-x)/2;
	for(i=n;i>=0;i--)
	{
		f<<y<<" ";
		y=y-2*i;
	}
	return 0;
}

/*
		Acest algoritm este eficient din punct de vedere
	al timpului deoarece acesta construieste numerele
	in n pasi, folosind formula sirului si avand complexitate 0(n).
	Iar acest algoritm este eficient din punct de vedere al
	memoriei uitilizate deoarce acesta nu foloseste vectori,
	ci doar variabile simple, avand complexitatea 0(1).
*/
