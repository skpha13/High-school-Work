#include <iostream>
#include <fstream>

using namespace std;

ifstream f("bimax.in");
ofstream g("bimax.out");

int mx=0;

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
        if(mx<r->inf)mx=r->inf;
        RSD(r->st);
        RSD(r->dr);
    }
}

int main()
{
    creare(r);
    RSD(r->st);
    g<<mx<<" ";
    mx=0;
    RSD(r->dr);
    g<<mx;
    return 0;
}
