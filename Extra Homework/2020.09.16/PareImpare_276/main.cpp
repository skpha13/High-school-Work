#include <iostream>
#include <fstream>

using namespace std;

ifstream f("pareimpare.in");
ofstream g("pareimpare.out");

int x,v[100],i;

int main()
{
    while(f>>x)
        v[x]=1;
    for(i=0;i<=99;i++)
        if(i%2!=0 && v[i]==1)
            g<<i<<" ";
    g<<endl;
    for(i=99;i>=0;i--)
        if(i%2==0 && v[i]==1)
            g<<i<<" ";
    f.close();
    g.close();
    return 0;
}
