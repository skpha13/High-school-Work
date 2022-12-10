#include <iostream>
#include <fstream>

using namespace std;

ifstream f("LISTA.IN");
ofstream g("LISTA.OUT");

struct nod
{
    int inf;
    nod *urm,*pred;
}*p,*u;

int i;

void creare(nod *&p, nod *&u, int &i)
{
    int x;
    i=1;
    nod *c;
    p=u=NULL;
    while(f>>x)
    {
        c=new nod;
        c->inf=x;
        c->pred=c->urm=NULL;
        if(p==NULL)
            p=u=c;
        else
        {
            u->urm=c;
            c->pred=u;
            u=c;
        }
    }
}

void afisare(nod *p)
{
    int k;
    nod *c,*v;
    c=v=p;
    while(c)
    {
        v=c;
        k=0;
        while(c->inf==v->inf)
        {
            k++;
            c=c->urm;
        }
        g<<c->pred->inf<<" "<<k<<endl;
    }
}

void parcurgere(nod *p)
{
    int x;
    nod *c,*v;
    c=p;
    v=p->urm;
    while(c)
    {
        v=c;
        while(v)
        {
            if(c->inf>v->inf)
                {
                    x=v->inf;
                    v->inf=c->inf;
                    c->inf=x;
                }
            v=v->urm;
        }
        c=c->urm;
    }
}

int main()
{
    creare(p,u,i);
    parcurgere(p);
    afisare(p);
    return 0;
}
