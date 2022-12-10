#include <iostream>
#include <fstream>

using namespace std;

ifstream f("binefrunze1.in");
ofstream g("binefrunze1.out");

int v[5001],n;

struct nod
{
    int inf;
    nod *st,*dr;
} *r;

void creare(nod *&r)
{
    int x;
    f>>x;
    if(x==0)r=NULL;
    else
    {
        r=new nod;
        r->inf=x;
        creare(r->st);
        creare(r->dr);
    }
}

void RSD(nod *r)
{
    if(r)
    {
        if(r->st!=NULL || r->dr!=NULL)
            v[++n]=r->inf;
        RSD(r->st);
        RSD(r->dr);
    }
}

int main()
{
    int i,j;
    creare(r);
    RSD(r);
    for(i=1;i<n;i++)
        for(j=i+1;j<=n;j++)
            if(v[i]<v[j])swap(v[i],v[j]);
    for(i=1;i<=n;i++)
        g<<v[i]<<" ";
    return 0;
}
