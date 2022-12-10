#include <iostream>
#include <fstream>

using namespace std;

ifstream f("pozmax.in");
ofstream g("pozmax.out");

int n,p,y,z;
float x,mx;

int main()
{
    f>>x;
    n=x;
    f>>x;
    mx=x;
    p++;
    while(f>>x)
    {
        p++;
        if(mx<x)
        {
            mx=x;
            y=p;
            z=p;
        }
        else
            if(mx==x)
            {
                z=p;
            }
    }
    g<<y<<" "<<z;
    f.close();
    g.close();
    return 0;
}
