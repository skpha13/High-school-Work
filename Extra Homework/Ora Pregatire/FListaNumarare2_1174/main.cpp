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

int prime(int a,int b)
{
    int r=a%b;
    while(r)
    {
        a=b;
        b=r;
        r=a%b;
    }
    if(b==1)
        return 1;
    else
        return 0;
}

int numarare(nod *p)
{
    int k=0;
    nod *c,*v;
    c=p;
    v=p->urm;
    while(c)
    {
        v=c->urm;
        while(v)
        {
            if(prime(c->info,v->info))
                k++;
            v=v->urm;
        }
        c=c->urm;
    }
    return k;
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
    cout<<numarare(p);
    return 0;
}
