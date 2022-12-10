#include <iostream>
#include <fstream>

using namespace std;

ifstream f("inordine1.in");
ofstream g("inordine1.out");

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
        RSD(r->st);
        g<<r->inf<<" ";
        RSD(r->dr);
    }
}

int main()
{
    creare(r);
    RSD(r);
    return 0;
}
