#include <iostream>
#include <fstream>

using namespace std;

ifstream f("biminprim.in");
ofstream g("biminprim.out");

int mx=999999999,ok;

int prim(int n)
{
    if(n<2)return 0;
    for(int i=2;i*i<=n;i++)
        if(n%i==0)return 0;
    return 1;
}

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
        if(prim(r->inf) && mx>r->inf)
        {
            ok=1;
            mx=r->inf;
        }
        RSD(r->st);
        RSD(r->dr);
    }
}

int main()
{
    creare(r);
    RSD(r->st);
    if(ok)
        g<<mx<<" ";
    else
        g<<-1<<" ";
    mx=999999999;
    ok=0;
    RSD(r->dr);
    if(ok)
        g<<mx<<" ";
    else
        g<<-1<<" ";
    return 0;
}
