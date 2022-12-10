#include <iostream>

using namespace std;

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

int suma(nod *p)
{
    int s=0;
    nod *c;
    c=p;
    while(c->urm->urm)
    {
        if(c->info%2==0 && c->urm->urm->info%2==0 && c->urm->info%2!=0)
            s+=c->urm->info;
        c=c->urm;
    }
    return s;
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
    afisare(p);
    cout<<suma(p);
    return 0;
}
