#include <iostream>
#include <fstream>

using namespace std;

ifstream f("IN.TXT");
ofstream g("OUT.TXT");

struct nod
{
    int inf;
    nod *urm,*pred;
}*p,*u;

void creare(nod *&p, nod *&u)
{
    int x;
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
    nod *c;
    c=p;
    for(c=p;c!=NULL;c=c->urm)
         g<<c->inf<<" ";
    g<<endl;
}

void stergere(nod *c)
{
    nod *aux;
    aux=c;
    c->pred->urm=c->urm;
    c->urm->pred=c->pred;
    delete aux;
}

void parcurgere(nod *&p, nod *&u)
{
    int mx;
    nod *c,*aux;
    c=p;
    mx=p->inf;
    c=c->urm;
    while(c)
    {
        if(mx<c->inf)
            mx=c->inf;
        c=c->urm;
    }
    while(p && p->inf==mx)
    {
        aux=p;
        p=p->urm;
        p->pred=NULL;
        delete aux;
    }
    while(u && u->inf==mx)
    {
        aux=u;
        u=u->pred;
        u->urm=NULL;
        delete aux;
    }
    c=p;
    while(c->urm)
        if(c->urm->inf==mx)
            stergere(c->urm);
        else
            c=c->urm;
}

int main()
{
    creare(p,u);
    parcurgere(p,u);
    afisare(p);
    return 0;
}
