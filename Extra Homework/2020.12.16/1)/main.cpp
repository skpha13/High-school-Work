#include <iostream>

using namespace std;

struct nod
{
    int inf;
    nod *urm,*pred;
}*p,*u,*a,*b;

void creare(nod *&p, nod *&u, int n)
{
    int i;
    nod *c;
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

void verificare(nod *p, nod *a)
{
    int ok=1;
    nod *c,*v;
    c=p;
    v=b;
    while(c && v)
    {
        if(c->inf!=v->inf)
            ok=0;
        c=c->urm;
        v=v->pred;
    }
    if(ok)cout<<"DA";
    else
        cout<<"NU";
}

int main()
{
    int n,m;
    cin>>n;
    creare(p,u,n);
    cin>>m;
    creare(a,b,m);
    afisare(p);
    afisare(a);
    if(n!=m)
        cout<<"NU";
    else
        verificare(p,a);
    return 0;
}
