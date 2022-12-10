#include <iostream>
#include <fstream>

using namespace std;

ifstream f("cifreord.in");
ofstream g("cifreord.out");

int n,v[10],i,x,mx,j,k;

int main()
{
    f>>n;
    while(f>>x)
    {
        v[x]++;
        if(x>mx)mx=x;
    }
    for(i=0;i<=mx;i++)
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
