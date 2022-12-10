#include <iostream>
#include <fstream>

using namespace std;

ifstream f("maxcif.in");
ofstream g("maxcif.out");

int v[10],i,x,mx,a;

int main()
{
    while(f>>x)
    {
        v[x]++;
        if(x>mx)mx=x;
    }
    for(i=0;i<=mx;i++)
        if(a<v[i])a=v[i];
    for(i=0;i<=mx;i++)
        if(v[i]==a)g<<i<<" ";
    return 0;
}
