#include <iostream>
#include <fstream>

using namespace std;

ifstream f("bac.txt");

int x,y,z;

int main()
{
    f>>x>>y;
    if(x>y) 
    {
        x+=y;
        y=x-y;
        x=x-y;
    }
    while(f>>z)
    {
        if(x<z && x!=0)
        {
            cout<<x<<" ";
            x=0;
        }
        if(y<z && y!=0)
        {
            cout<<y<<" ";
            y=0;
        }
        cout<<z<<" ";
    }
    if(x) cout<<x<<" ";
    if(y) cout<<y;
    f.close();
    return 0;
}