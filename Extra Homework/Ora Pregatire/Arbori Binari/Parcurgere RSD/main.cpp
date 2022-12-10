#include <iostream>

using namespace std;

struct nod
{
    int inf;
    nod *st,*dr;
} *r;

void creare(nod *&r)
{
    int x;
    cin>>x;
    if(x==0)r=NULL;
    else
    {
        r=new nod;
        r->inf=x;
        creare(r->st);
        creare(r->dr);
    }
}

void RSD(nod *r)
{
    if(r)
    {
        cout<<r->inf<<" ";
        RSD(r->st);
        RSD(r->dr);
    }
}

int main()
{
    creare(r);
    RSD(r);
    return 0;
}
