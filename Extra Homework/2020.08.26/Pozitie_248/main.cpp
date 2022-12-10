#include <iostream>
#include <fstream>

using namespace std;

ifstream f("pozitie.in");
ofstream g("pozitie.out");

int n,x,y,k,i;

int main()
{
    f>>n;
    f>>x;
    for(i=2;i<=n;i++)
    {
        f>>y;
        if(x>y)k++;
    }
    g<<k+1;
    f.close();
    g.close();
    return 0;
}
