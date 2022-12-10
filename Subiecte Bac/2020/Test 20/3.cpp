#include <iostream>
#include <fstream>

using namespace std;

ifstream f("bac.txt");

int s,smx,x,y;

int main()
{
    f>>x;
    while(f>>y)
    {
        if(x%2==y%2) s+=x;
        else
            {
                s+=x;
                if(s>smx)smx=s;
                s=0;
            }
        x=y;
    }
    if(x%2==y%2) s+=y;
    if(s>smx) smx=s;
    cout<<smx;
    f.close();
    return 0;
}
