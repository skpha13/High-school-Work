#include <iostream>
#include <fstream>

using namespace std;

ifstream f("bac.txt");

int x,mx,n;

int main()
{
    f>>n;
    f>>x;
    mx=x;
    cout<<mx<<" ";
    while(f>>x)
    {
        if(mx<x)
            mx=x;
        cout<<mx<<" ";
    }
    return 0;
}
