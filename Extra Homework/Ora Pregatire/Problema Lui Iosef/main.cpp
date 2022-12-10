#include <iostream>

using namespace std;

struct nod
{
    int inf;
    nod *urm,*pred;
}*p,*u;

int n,m,k;

void creare(nod *&p,nod *&u)
{
    int i;
    nod *c;
    p=u=NULL;
    for(i=1;i<=n;i++)
    {
        c=new nod;
        c->inf=i;
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
    u->urm=p;
    p->pred=u;
}

void stergere(nod *&p)
{
    nod *aux;
    aux=p;
    p->pred->urm=p->urm;
    p->urm->pred=p->pred;
    p=p->pred;
    delete aux;
}

void prelucrare(nod *p,int n,int m,int k)
{
    int i,j;
    while(p->inf!=m)
        p=p->urm;
    for(i=1;i<=n;i++)
    {
        cout<<p->inf<<" ";
        stergere(p);
        for(j=1;j<=k;j++)
            p=p->urm;
    }
}

int main()
{
    cin>>n>>m>>k;
    creare(p,u);
    prelucrare(p,n,m,k);
    return 0;
}
