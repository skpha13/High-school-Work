#include <iostream>
#include <fstream>

using namespace std;

ifstream f("LISTA.IN");
ofstream g("LISTA.OUT");

struct nod
{
    int inf,fv;
    nod *urm,*pred;
}*p,*u;

nod *caut(nod *p,int x)
{
    nod *c;
    c=p;
    while(c && c->inf!=x)
        c=c->urm;
    return c;
}

void adaug(nod *&p,nod *&u,int x)
{
    nod *c;
    c=new nod;
    c->inf=x;
    c->fv=1;
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

void creare(nod *&p, nod *&u)
{
    int x;
    nod *c;
    p=u=NULL;
    while(f>>x)
    {
        c=caut(p,x);
        if(!c)
            adaug(p,u,x);
        else
            c->fv++;
    }
}

void afisare(nod *p)
{
    int x;
    nod *c,*v;
    c=p;
    v=c->urm;
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
                    x=v->fv;
                    v->fv=c->fv;
                    c->fv=x;
                }
            v=v->urm;
        }
        c=c->urm;
    }
    for(c=p;c!=NULL;c=c->urm)
        g<<c->inf<<" "<<c->fv<<endl;
    g<<endl;
}

int main()
{
    creare(p,u);
    afisare(p);
    return 0;
}
