#include <iostream>
#include <fstream>

using namespace std;

ifstream f("numere8.in");
ofstream g("numere8.out");

int v[10000],i,x;

int main()
{
    while(f>>x)
        if(x<10000)
            v[x]=1;
    for(i=9999;i>=1;i--)
        if(!v[i])g<<i<<" ";
    return 0;
}
