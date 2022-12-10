#include <iostream>
#include <fstream>

using namespace std;

ifstream f("cifreord1.in");
ofstream g("cifreord1.out");

int v[10],i,x,j,k,c;

int main()
{
    while(f>>x)
    {
        if(x==0)v[0]++;
        while(x)
        {
            c=x%10;
            v[c]++;
            x/=10;
        }
    }
    for(i=9;i>=0;i--)
        for(j=1;j<=v[i];j++)
        {
            k++;
            g<<i<<" ";
            if(k==20)
            {
                g<<endl;
                k=0;
            }
        }
    return 0;
}
