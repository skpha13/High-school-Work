#include <iostream>
#include <fstream>

using namespace std;

ifstream f("postordine1.in");
ofstream g("postordine1.out");

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
        RSD(r->dr);
        g<<r->inf<<" ";
    }
}

int main()
{
    creare(r);
    RSD(r);
    return 0;
}
