#include <iostream>

using namespace std;

int palindrom(int n)
{
    int x=n,ogl=0;
    while(n)
    {
        ogl=ogl*10+n%10;
        n/=10;
    }
    if(ogl==x)
        return ogl;
    else
        return 0;
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

void inserare(nod *c)
{
    nod *d;
    d=new nod;
    d->inf=-c->inf;
    d->urm=c->urm;
    d->pred=c;
    c->urm->pred=d;
    c->urm=d;
}

void parcurgere(nod *&p, nod *&u)
{
    nod *c,*d;
    if(palindrom(u->inf))
    {
        d=new nod;
        d->inf=-u->inf;
        d->urm=NULL;
        d->pred=u;
        u->urm=d;
        u=d;
    }
    c=p;
    while(c->urm)
        if(palindrom(c->inf))
        {
            inserare(c);
            c=c->urm->urm;
        }
        else
            c=c->urm;
}

int main()
{
    creare(p,u);
    afisare(p);
    parcurgere(p,u);
    afisare(p);
    return 0;
}
