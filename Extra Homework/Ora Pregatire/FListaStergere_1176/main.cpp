#include <iostream>

using namespace std;

struct nod
{
    int info;
    nod *urm;
} *p,*u,*q;

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

void sterge(nod *&p, nod *q)
{
    nod *c,*aux;
    c=p;
    while(c->urm && c->urm!=q)
        c=c->urm;
    if(c->urm->urm!=NULL)
    {
        c=c->urm;
        aux=c->urm;
        c->urm=c->urm->urm;
        delete aux;
    }
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
    cout<<endl;
}

int main()
{
    creare(p,u);
    sterge(p,q);
    afisare(p);
    return 0;
}
