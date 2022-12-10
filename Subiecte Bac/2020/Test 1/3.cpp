#include <iostream>
#include <fstream>

using namespace std;

ofstream f("bac.txt");

int n,x,y,t;

int main()
{
	cin>>x>>y;
	cout<<y<<" "<<x<<" ";
	while(y!=1 || x!=1)
	{
		t=3*x-y;
		cout<<t<<" ";
		y=x;
		x=t;
	}
	return 0;
}

/*
        Algoritmul respectiv citeste numerele x si y,
    le afiseaza, iar din formula data in enunt putem
    afla ca numarul anterior celor doua este egal cu
    3*x-y. Intr-o structura repetitiva folosim acesta
    formula pana cand se ajunge la 1, schimband y-ul cu
    x-ul si x-ul cu t-ul pentru a actualiza numerele.
        Acest algoritm este eficient din punct de vedere
    al timpului de executare deoarece este un algoritm
    liniar, pentru ca cei n termeni sunt parcursi o
    singura data cu complexitate O(n),n fiind numarul de
    termeni.
        Acest algoritm este eficient din punct de
    vedere al memoriei utilizate deoarece nu foloseste
    vectori ci doar variabile simple, avand complexitate
    O(1).
*/
