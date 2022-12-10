#include <iostream>

using namespace std;

struct nod
{
    int inf;
    nod *urm;
}*p,*u;

void creare(nod *&p,nod *&u)
{
    int n,i;
    nod *c;
    cin>>n;
    p=u=NULL;
    for(i=1;i<=n;i++)
    {
        c=new nod;
        cin>>c->inf;
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

void afis(nod *p)
{
    nod *c;
    c=p;
    for(c=p;c!=NULL;c=c->urm)
        cout<<c->inf<<" ";
    cout<<endl;
}

int main()
{
    creare(p,u);
    afis(p);
    return 0;
}
