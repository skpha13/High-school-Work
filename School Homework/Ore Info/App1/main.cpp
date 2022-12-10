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

void inversare(nod *p)
{
    int aux;
    nod *c,*v;
    c=p;
    v=u;
    while(c->urm!=v)
    {
        swap(c->inf,v->inf);
        c=c->urm;
        v=v->pred;
    }
}

int main()
{
    creare(p,u);
    afisare(p);
    inversare(p);
    afisare(p);
    return 0;
}
