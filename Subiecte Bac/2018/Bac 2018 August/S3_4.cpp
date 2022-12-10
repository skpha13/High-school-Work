#include <iostream>
#include <fstream>

using namespace std;

ofstream g("bac.txt");

int x,y,z;

int main()

{
    cin>>x>>y;
    g<<y<<" "<<x<<" ";
    do
    {
        z=2*x+2-y;
        g<<z<<" ";
        y=x;
        x=z;
    }while(z);
    g.close();
    return 0;
}