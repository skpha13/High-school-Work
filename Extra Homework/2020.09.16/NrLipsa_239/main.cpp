#include <iostream>
#include <fstream>

using namespace std;

ifstream f("nrlipsa.in");
ofstream g("nrlipsa.out");

int n,v[1000],i,x,k;

int main()
{
    while(f>>x)
        if(x<1000 && x>99)
            v[x]=1;
    for(i=999;i>=100;i--)
        if(v[i]==0 && k<2)
        {
            g<<i<<" ";
            k++;
        }
    if(k==0)g<<"NU";
    return 0;
}
