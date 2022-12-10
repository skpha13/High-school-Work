#include <iostream>
#include <fstream>

using namespace std;

ifstream f("unice.in");
ofstream g("unice.out");

int n,v[100],i,x,mx,a;

int main()
{
    f>>n;
    while(f>>x)
    {
        v[x]++;
        if(x>mx)mx=x;
    }
    for(i=0;i<=mx;i++)
        if(v[i]==1)g<<i<<" ";
    return 0;
}
