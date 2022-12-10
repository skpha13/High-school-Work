#include <iostream>
#include <fstream>

using namespace std;

ifstream f("bac.txt");

int x,y,z,l=2,lmax=3;

int main()
{
    f>>x>>y;
    while(f>>z)
    {
        if(x!=y && y!=z && x!=z)
        {
            l++;
            if(l>lmax)lmax=l;
        }
        else
            l=2;
        x=y;
        y=z;
    }
    cout<<lmax;
    f.close();
    return 0;
}