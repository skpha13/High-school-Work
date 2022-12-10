#include <iostream>

using namespace std;

int n,d,p;

void putere(int n,int &d,int &p);

int main()
{
    cin>>n;
    putere(n,d,p);
    cout<<d<<" "<<p;
    return 0;
}

void putere(int n,int &d,int &p)
{
    int ok=0;
    d=2;
    while(n>1 && !ok)
    {
        p=0;
        while(n%d==0)
            {
                n/=d;
                p++;
            }
        if(!p) d++;
        else
            if(d!=2)ok=1;
    }
    if(ok==0)
    {
        d=0;
        p=0;
    }
}