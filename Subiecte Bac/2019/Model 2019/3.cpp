#include <iostream>
#include <fstream>

using namespace std;

ifstream f("bac.txt");

int x,i,v[101],s,smax;

int main()
{
    while(f>>x) v[x]++;
    for(i=0;i<=100;i++)
        if(v[i])
        {
            s+=v[i];
            if(s>smax)smax=s;
        }
        else s=0;
    cout<<smax;
    f.close();
    return 0;
}