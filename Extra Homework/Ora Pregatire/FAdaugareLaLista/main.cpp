#include <iostream>

using namespace std;

int x;

struct nod
{
    int info;
    nod *urm;
} *p,*u;

void creare(nod *&p, nod*&u)
{
    int n,i;
    nod *c;
    cin>>n;
    p=u=NULL;
    for(i=1;i<=n;i++)
    {
        c=new nod;
        cin>>c->info;
        c->urm=NULL;
        if(p==NULL)
            p=u=c;
        else
        {
            u->urm=c;
            u=c;
        }
    }
}

void adaugare(nod *&p, int x)
{
    nod *d,*c;
    c=p;
    while(c->urm!=NULL)c=c->urm;
    d=new nod;
    d->info=x;
    d->urm=c->urm;
    c->urm=d;
}

void afisare(nod *p)
{
    nod *c;
    c=p;
    while(c)
    {
        cout<<c->info<<" ";
        c=c->urm;
    }
}

int main()
{
    creare(p,u);
    cin>>x;
    adaugare(p,x);
    afisare(p);
    return 0;
}
