#include <iostream>
#include <fstream>

using namespace std;

ifstream f("minimdoua.in");
ofstream g("minimdoua.out");

int n,x,y,a,i,m;

int main()
{
    f>>a;
    n=a;
    x=y=1000000;
    i=1;
    while(i<=n)
    {
        f>>a;
        m=a;
        if(m>10 && m%10==m/10%10)
        {
            if(x>=a)
            {
                y=x;
                x=a;
            }
            else
                if(y>=a)y=a;
        }
        i++;
    }
    if(x<1000000 && y<1000000)
        g<<x<<" "<<y;
    else
        g<<"numere insuficiente";
    f.close();
    g.close();
    return 0;
}
