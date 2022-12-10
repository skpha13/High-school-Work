#include <iostream>
#include <fstream>

using namespace std;

ifstream f("nrlipsa1.in");
ofstream g("nrlipsa1.out");

int n,v[100],i,x,k,a,b;

int main()
{
    while(f>>x)
        if(x<100 && x>9)
            v[x]=1;
    for(i=10;i<=99;i++)
        if(v[i]==0 && i%2==0)
        {
            a=i;
            k++;
            break;
        }
    for(i=99;i>=10;i--)
        if(v[i]==0 && i%2==0)
        {
            b=i;
            k++;
            break;
        }
    if(k>=1)g<<a<<" "<<b;
        else
            g<<"nu exista";
    f.close();
    g.close();
    return 0;
}
