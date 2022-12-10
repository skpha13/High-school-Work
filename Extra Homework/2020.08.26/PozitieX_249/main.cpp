#include <iostream>
#include <fstream>

using namespace std;

ifstream f("pozitiex.in");
ofstream g("pozitiex.out");

int n,x,y,k,i,p;

int main()
{
    f>>x;
    f>>n;
    for(i=1;i<=n;i++)
    {
        f>>y;
        if(x==y)p++;
        if(x>y)k++;
    }
    if(p)g<<k+1;
        else
            g<<"NU EXISTA";
    f.close();
    g.close();
    return 0;
}
