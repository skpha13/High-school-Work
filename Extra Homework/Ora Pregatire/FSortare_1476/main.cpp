#include <iostream>

using namespace std;

struct nod
{
    int info;
    nod *urm;
} *prim,*u;

void creare(nod *&p, nod*&u)
{
    int n,i;
    nod *c;
    cin>>n;
    prim=u=NULL;
    for(i=1;i<=n;i++)
    {
        c=new nod;
        cin>>c->info;
        c->urm=NULL;
        if(prim==NULL)
            prim=u=c;
        else
        {
            u->urm=c;
            u=c;
        }
    }
}

void sortareCrescator(nod *&prim)
{
    int x;
    nod *c,*v;
    c=prim;
    v=prim->urm;
    while(c)
    {
        v=c;
        while(v)
        {
            if(c->info>v->info)
                {
                    x=v->info;
                    v->info=c->info;
                    c->info=x;
                }
            v=v->urm;
        }
        c=c->urm;
    }
}

void afisare(nod *&p)
{
    nod *c;
    c=prim;
    while(c)
    {
        cout<<c->info<<" ";
        c=c->urm;
    }
}

int main()
{
    creare(prim,u);
    sortareCrescator(prim);
    afisare(prim);
    return 0;
}
