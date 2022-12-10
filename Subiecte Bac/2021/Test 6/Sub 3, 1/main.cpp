#include <iostream>

using namespace std;

int n,m,c;

void numar(int n,int c,int &m)
{
    int v[11],ok=0,p=1,i;
    m=0;
    for(i=0;i<11;i++)v[i]=-1;
    i=0;
    while(n)
    {
        if(n%10!=c) v[i++]=n%10;
        n/=10;
    }
    for(i=0;i<11;i++)
        if(v[i]!=-1)
        {
            m=m+v[i]*p;
            p*=10;
            ok=1;
        }
    if(!ok)m=-1;
}

int main()
{
    cin>>n>>c;
    numar(n,c,m);
    cout<<m;
    return 0;
}
