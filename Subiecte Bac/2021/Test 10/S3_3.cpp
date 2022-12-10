#include <iostream>
#include <fstream>

using namespace std;

ifstream f("bac.txt");

int x,k,y;

int main()
{
	f>>y;
	while(f>>x)
		if(x<y)k++;
	cout<<k+1;
	return 0;
}

/* 
	Algoritmul este eficient din punct de vedere
   al timpului de executare deoarece numerele
   sunt prelucrate in timpul citirii, numarandu-se
   numerele mai mici decat primul termen al sirului
   pentru a afla pozitia acestuia in sirul ordonat crescator,
   avand complexitatea 0(n).
	Iar acest algoritm este eficient din punct de vedere
   al memoriei utilizate deoarece aceste nu foloseste vectori 
   ci doar variabile simple, avand complexitatea 0(1).
   
*/