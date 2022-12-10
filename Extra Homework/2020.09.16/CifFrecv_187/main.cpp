#include <iostream>
#include <fstream>

using namespace std;

ifstream f("ciffrecv.in");
ofstream g("ciffrecv.out");

int n,v[10],i,mx,x,ok;

int main()
{
    while(f>>x)
    {
        ok=0;
        if(x==2 || x==3 || x==5 || x==7)
            ok=1;
        if(ok)v[x]++;
    }
    for(i=0;i<=9;i++)
        if(v[i]>0 && mx<i)
            mx=i;
    g<<mx<<" "<<v[mx];
    return 0;
}
