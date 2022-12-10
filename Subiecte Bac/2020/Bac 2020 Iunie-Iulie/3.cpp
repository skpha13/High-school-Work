#include <iostream>
#include <fstream>

using namespace std;

ifstream f("bac.in");

int x,v[1001],i,mx,nr;

int main()
{
    while(f>>x)
    {
        v[x]++;
        if(mx<x)mx=x;
    }
    for(i=1;i<=mx;i++)
        if(v[i]%2==1)nr++;
    if(nr>1)cout<<"NU";
    else cout<<"DA";
    return 0;
}