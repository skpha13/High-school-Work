#include <iostream>

using namespace std;

int prim(int n)
{
    if(n<2)return 0;
    for(int i=2;i*i<=n;i++)
        if(n%i==0)
            return 0;
    return 1;
}

struct nod
{
    int inf;
    nod *urm,*pred;
}*p,*u;

void creare(nod *&p, nod *&u)
{
    int n,i;
    nod *c;
    cin>>n;
    p=u=NULL;
    for(i=1;i<=n;i++)
    {
        c=new nod;
        cin>>c->inf;
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
        cout<<c->inf<<" ";
    cout<<endl;
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
    nod *c,*aux;
    while(p && prim(p->inf))
    {
        aux=p;
        p=p->urm;
        p->pred=NULL;
        delete aux;
    }
    while(u && prim(u->inf))
    {
        aux=u;
        u=u->pred;
        u->urm=NULL;
        delete aux;
    }
    c=p;
    while(c->urm)
    {
        if(prim(c->urm->inf))
            stergere(c->urm);
        else
            c=c->urm;
    }
}

int main()
{
    creare(p,u);
    afisare(p);
    parcurgere(p,u);
    afisare(p);
    return 0;
}
