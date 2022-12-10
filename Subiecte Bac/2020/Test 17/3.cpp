#include <iostream>
#include <fstream>

using namespace std;

ifstream f("bac.txt");

int n,v[10001],i,nr,ok,x,y;

int main()
{
    f>>n;
    for(i=1;i<=n;i++)
        f>>v[i];
    while(f>>x>>y)
    {
        ok=0;
        for(i=x;i<=y;i++)
            if(v[i]) ok=1;
        if(ok) nr++;
    }
    cout<<nr;
    f.close();
    return 0;
}