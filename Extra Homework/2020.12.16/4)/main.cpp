#include <iostream>
#include <fstream>

using namespace std;

ifstream f("LISTA.IN");
ofstream g("LISTA.OUT");

struct nod
{
    int inf,ord,fv;
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
        c->ord=i++;
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
        if(c->fv)
            g<<c->ord<<" "<<c->fv<<endl;
    g<<endl;
}

void parcurgere(nod *p)
{
    int n=i;
    nod *c;
    c=p;
    for(i=1;i<=n;i++)
    {
        c->fv=0;
        c=c->urm;
    }
    c=p;
    for(i=1;i<=n;i++)
        while(c)
        {
            if(c->ord==i)
                c->fv++;
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
