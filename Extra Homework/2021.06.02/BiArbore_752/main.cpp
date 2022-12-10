#include <iostream>
#include <fstream>

using namespace std;

ifstream f("biarbore.in");
ofstream g("biarbore.out");

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
        g<<r->inf<<" ";
    else
        g<<0<<" ";
}

int main()
{
    creare(r);
    RSD(r->st);
    RSD(r->dr);
    return 0;
}
