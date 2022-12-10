#include <iostream>

using namespace std;

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

void stergere(nod *&c)
{
    nod *aux;
    aux=c;
    c->pred->urm=c->urm;
    c->urm->pred=c->pred;
    delete aux;
}

void parcurgere(nod *&p)
{
    nod *c,*aux;
    if(p->inf==0)
    {
        aux=p;
        p=p->urm;
        p->pred=NULL;
        delete aux;
    }
    if(u->inf==0)
    {
        aux=u;
        u=u->pred;
        u->urm=NULL;
        delete aux;
    }
    c=p;
    while(c->urm)
    {
        if(c->urm->inf==0)
            stergere(c->urm);
        else
            c=c->urm;
    }
       /* while(c && c->inf!=0)
            c=c->urm;
        aux=c;
        c->pred->urm=c->urm;
        c->urm->pred=c->pred;
        delete aux;
        */
}

int main()
{
    creare(p,u);
    afisare(p);
    parcurgere(p);
    afisare(p);
    return 0;
}
