#include <iostream>
#include <fstream>

using namespace std;

ifstream f("numere.txt");

int v[10],x,i,j,c;

int main()
{
    while(f>>x)
        while(x)
        {
            v[x%10]++;
            x/=10;
        }
    for(i=9;i>=0;i--)
        for(j=1;j<=v[i];j++)
            cout<<i;
    return 0;
}

/*Acest algoritm este eficient din punct de vedere
al timpului de executare deoarece cifrele numerelor
sunt prelucrate intr-un vector de frecventa care ajuta
la construirea numarului maxim. Acest algoritm are
eficienta O(n)
*/
