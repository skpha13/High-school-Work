#include <iostream>
#include <fstream>

using namespace std;

ifstream f("numere.in");

int n,x,y,nr;

int main()
{
    f>>n>>x;
    nr=1;
    while(f>>y)
    {
        if(x!=y) nr++;
        x=y;
    }
    cout<<n-nr;
    f.close();
    return 0;
}