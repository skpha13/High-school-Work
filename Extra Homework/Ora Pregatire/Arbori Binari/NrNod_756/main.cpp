#include <iostream>
#include <fstream>

using namespace std;

ifstream f("nrnod.in");
ofstream g("nrnod.out");

int c;

void creare(int c)
{
    int v[10001],i=0,n;
    while(f>>v[++i])
    n=i;
    for(i=1;i<=n-2;i++)
        if(v[i]!=0 && v[i+1]==0 && v[i+2]!=0)
            c++;
    i=n-2;
    if(v[i+1]!=0 && v[i+2]==0)
        c++;
    g<<c;
}

int main()
{
    creare(c);
    return 0;
}
