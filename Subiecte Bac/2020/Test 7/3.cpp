#include <iostream>
#include <fstream>

using namespace std;

fstream f("bac.txt");

int x,s,smin;

int main()
{
	while(f>>x)
	{
		s+=x;
		if(s<smin)smin=s;
		if(s>0)s=0;
	}
	cout<<smin;
	f.close();
	return 0;
}

/*
		Acest algoritm citeste numerele unul cate unul si le adauga
	in variabila s, iar apoi verifica daca numarul adaugat ajuta sau 
	nu la obtinerea sumei minime. Daca s este mai mare decat 0 atunci
	acesta se reinitializeaza cu 0, iar daca variaba smin care reprezinta
	suma minima este mai mare decat s atunci aceasta ia valoarea ei.
		Acest algoritm este eficient dpdv. al timpului de executare, deoarece
	parcurge numerele doar o data, fiind un algoritm liniar si avand complexitate
	O(n), unde n este numarul de numere citite.
		Acest algoritm este eficient dpdv. al memoriei utilizate, deoarece
	acesta nu folosete vectori, ci doar variabile simple, avand complexitate O(1).
*/