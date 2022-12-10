#include <iostream>
#include <fstream>

using namespace std;

ifstream f("bac.txt");

int x,y,s,l=1,lmax;

int main()
{
    f>>x;
    while(f>>y)
    {
        if(x==y) l++;
        else
        {
            if(l==x) s+=x;
            else s=0;
            l=1;
        }
        if(s>lmax) lmax=s;
        x=y;
    }
    cout<<lmax;
    f.close();
    return 0;
}