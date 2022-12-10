#include <iostream>
#include <fstream>

using namespace std;

ifstream f("bimax.in");
ofstream g("bimax.out");

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

int maxim(nod *r)
{
    int x,y,mx;
    if(!r)return 0;
    {
        x=maxim(r->st);
        y=maxim(r->dr);
        mx=r->inf;
        if(mx<x)mx=x;
        if(mx<y)mx=y;
        return mx;
    }
}

int main()
{
    creare(r);
    g<<maxim(r->st)<<" "<<maxim(r->dr);
    return 0;
}
