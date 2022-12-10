#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;

ifstream f("elempp.in");
ofstream g("elempp.out");

int n,x,i,y,j,ogl,z,r;
float p;

int main()
{
    f>>n;
    for(i=1;i<=n;i++)
    {
        f>>x;
        y=x;
        while(y>99)
            y/=10;
        z=y;
        if(ceil(sqrt(y))*ceil(sqrt(y))==z)g<<x<<" ";
    }
    f.close();
    g.close();
    return 0;
}
