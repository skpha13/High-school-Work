#include <iostream>
#include <fstream>

using namespace std;

ifstream f("bac.txt");

int x,y,nr=1;

int main()
{
    f>>x;
    while(f>>y)
        if(y>=x) nr++;
    cout<<nr;
    f.close();
    return 0;
}