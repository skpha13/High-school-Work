#include <iostream>
#include <fstream>

using namespace std;

ifstream f("intervale5.in");
ofstream g("intervale5.out");

int x,v[100],i,a,b,ok,j,k,z;

int main()
{
    while(f>>x)
        v[x]=1;
    z=1;
    while(z<=99)
    {
        i=1;
        while(!v[i])
        {
            i++;
            b=i;
        }
        a=b-i+1;
        ok=1;
        if(b-a>=2)
            for(j=a+1;j<=b-1;j++)
                if(v[j]==1)
                    ok=0;
        if(ok)
        {
            g<<a<<" "<<b;
            k++;
        }
        z++;
    }
    if(k==0)
        g<<"nu exista";
    f.close();
    g.close();
    return 0;
}
