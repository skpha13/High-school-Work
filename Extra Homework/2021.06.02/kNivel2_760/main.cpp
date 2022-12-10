#include <iostream>
#include <fstream>

using namespace std;

ifstream f("knivel1.in");
ofstream g("knivel1.out");

int i,k;

struct nod
{
    int inf;
    nod *st,*dr;
} *r;

void creare(nod *&r)
{
    int x;
    f>>x;
    if(x==0)r=NULL;
    else
    {
        r=new nod;
        r->inf=x;
        creare(r->st);
        creare(r->dr);
    }
}

int RSD(nod *r,int i,int k)
{
    if(r==NULL)return 0;
    else
        if(i==k)return r->inf;
    return RSD(r->st,i+1,k)+RSD(r->dr,i+1,k);
}

int main()
{
    creare(r);
    f>>k;
    g<<RSD(r,i,k);
    return 0;
}
