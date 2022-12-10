#include <iostream>
#include <fstream>

using namespace std;

ifstream f("cifreord1.in");
ofstream g("cifreord1.out");

int x,i,v[10],k;

void prelnr(int n)
{
    if(n==0)
    {
        v[n]++;
        n/=10;
    }
    while(n)
    {
        v[n%10]++;
        n/=10;
    }
}

int main()
{
    while(f>>x)
        prelnr(x);
    for(i=9;i>=0;i--)
        while(v[i])
        {
            g<<i<<" ";
            v[i]--;
            if(k==19)
            {
                g<<endl;
                k=0;
            }
            else
                k++;
        }
    return 0;
}
