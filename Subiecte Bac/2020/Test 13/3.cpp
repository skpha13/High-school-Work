#include <iostream>
#include <fstream>

using namespace std;

ofstream g("bac.txt");

int x;

int main()
{
    cin>>x;
    while(x)
    {
        g<<x<<" ";
        x/=2;
    }
    g.close();
    return 0;
}