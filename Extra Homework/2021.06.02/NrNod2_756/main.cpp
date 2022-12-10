#include <iostream>
#include <fstream>

using namespace std;

ifstream f("nrnod.in");
ofstream g("nrnod.out");

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

int nr_nod(nod *r)
{
    if(!r)return 0;
    else
        if(r->st!=NULL && r->dr== NULL || r->st==NULL && r->dr!=NULL)
            return 1+nr_nod(r->st)+nr_nod(r->dr);
    return nr_nod(r->st)+nr_nod(r->dr);
}

int main()
{
    creare(r);
    g<<nr_nod(r);
    return 0;
}
