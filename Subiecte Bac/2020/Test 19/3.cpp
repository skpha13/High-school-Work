#include <iostream>
#include <fstream>

using namespace std;

ifstream f("bac.txt");

int x,y;

int main()
{
    f>>x;
    while(f>>y)
    {
        if(x%2==0 && x!=y)
            cout<<x<<" ";
        x=y; 
    }
    if(y%2==0)cout<<y;
    f.close();
    return 0;
}