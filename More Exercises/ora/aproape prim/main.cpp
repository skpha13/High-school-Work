#include <iostream>
#include <fstream>

using namespace std;

ifstream f("NUMERE.IN");

int n,i,v[100],ok=0,mx,p=1,x;

int prim(int n)
{
    if(n<2)return 0;
    for(int i=2;i*i<=n;i++)
        if(n%i==0)return 0;
    return 1;
}

int primul(int n)
{
    int d=2;
    while(n%d!=0 && d*d<n)
        d++;
    if(n%d!=0)
        return 0;
    if(prim(n/d)==1 && d!=n/d)
        return 1;
        else
            return 0;
}

int main()
{
    f>>n;
    while(f>>x)
        if(primul(x))
        {
            v[p]=x;
            p++;
            ok=1;
        }
    if(!ok)
        cout<<"NU";
    else
    {
        for(i=1;i<=n;i++)
            if(mx<v[i])
                mx=v[i];
        cout<<"DA"<<" "<<mx;
    }
    return 0;
}
