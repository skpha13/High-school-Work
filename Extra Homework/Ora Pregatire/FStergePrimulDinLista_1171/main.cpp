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

void stergePrimul(nod *&p)
{
    nod *aux;
    if(p==NULL)
        p=NULL;
    aux=p;
    p=p->urm;
    delete aux;
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
    stergePrimul(p);
    return 0;
}
