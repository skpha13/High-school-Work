#include <iostream>
#include <fstream>

using namespace std;

ifstream f("bac.in");

int x,s,v[10];

int main()
{
    while(f>>x)
        if(v[x]==0) 
        {
            s+=x*x+10;
            v[x]=1;
        }
        else s+=x*x;
    cout<<s;
    return 0;
}