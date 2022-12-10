#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,aux;
    cout<<"a=";cin>>a;
    cout<<"b=";cin>>b;
    cout<<"c=";cin>>c;
    cout<<"d=";cin>>d;
    if(a<b)
        aux=a;
        a=b;
        b=aux;
    if(a<c)
        aux=a;
        a=c;
        c=aux;
    if(a<d)
        aux=a;
        a=d;
        d=aux;
    if(b<c)
        aux=b;
        b=c;
        c=aux;
    if(b<d)
        aux=b;
        b=d;
        d=aux;
    if(c<d)
        aux=c;
        c=d;
        d=aux;
    cout<<a<<b<<c<<d;
    return 0;
}
