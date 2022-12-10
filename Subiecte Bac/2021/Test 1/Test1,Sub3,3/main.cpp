#include <iostream>
#include <fstream>

using namespace std;

ifstream f("bac.in");

int a,b,x,v[1000001],i,j,n,ok;

int main()
{
    while(f>>x)
    {
        if(x<=98 && x>=10)
            v[++i]=x;
    }
    n=i;
    for(i=1;i<n;i++)
        for(j=i+1;j<=n;j++)
            if(v[i]>v[j])
            {
                x=v[j];
                v[j]=v[i];
                v[i]=x;
            }
    i=n;
    while(i>=2)
    {
        if(v[i]!=v[i-1] && v[i]-v[i-1]>1 && ok==0)
        {
            a=v[i]-1;
            ok=1;
            i-=1;
        }
        if(ok==1 && v[i]!=v[i-1] && v[i]-v[i-1]>1)
        {
            b=v[i]-1;
            break;
        }
        i--;
    }
    if(a && b)
        cout<<a<<" "<<b;
    else
        cout<<"nu exista";
    return 0;
}
