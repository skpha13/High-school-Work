#include <iostream>
#include <fstream>

using namespace std;

ifstream f("bac.txt");

int x,s,smax;

int main()
{
    while(f>>x)
    {
        s+=x;
        if(s<0)
            s=0;
        if(s>smax)
            smax=s;
    }
    cout<<smax;
    return 0;
}
