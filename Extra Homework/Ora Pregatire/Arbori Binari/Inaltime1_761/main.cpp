#include <iostream>
#include <fstream>

using namespace std;

ifstream f("inaltime1.in");
ofstream g("inaltime1.out");

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

int h(nod *r)
{
    if(r==NULL)return 0;
    else
        return max(h(r->st), h(r->dr))+1;
}

void RSD(nod *r)
{
    if(r)
    {
        RSD(r->st);
        RSD(r->dr);
    }
}

int main()
{
    creare(r);
    //RSD(r);
    g<<h(r);
    return 0;
}
