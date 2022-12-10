#include <iostream>
#include <fstream>

using namespace std;

ifstream f("bac.txt");

int x,y,z,r,l,lmx,rmx,ok;

int main()
{
    f>>x>>y;
    while(f>>z)
    {
        if(y-x==z-y)
        {
            l++;
            r=y-x;
            ok=1;
        }
        else
            l=0;
        if(l>lmx)
        {   
            lmx=l;
            rmx=r;
        }
        else
            if(l==lmx && r>rmx)
            {
                lmx=l;
                rmx=r;
            }
        x=y;
        y=z;
    }
    if(!ok)cout<<"nu exista";
    else cout<<rmx;
    f.close();
    return 0;
}   