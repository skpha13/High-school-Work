#include <iostream>
#include <fstream>

using namespace std;

ifstream f("platou4.in");
ofstream g("platou4.out");

int s,k,x,p,d,ok;

int main()
{
    while(f>>x)
    {
        p++;
        if(x%2==0)
            d=p;
        if(x%2!=0 && !ok)
            s++;
        else
            ok=1;
    }
    k=d-s;
    g<<k;
    f.close();
    g.close();
    return 0;
}
