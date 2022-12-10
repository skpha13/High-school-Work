#include <iostream>

using namespace std;

int n,p;

void produs(int n,int &p)
{
    int v[10],i;
    p=1;
    for(i=0;i<=9;i++)v[i]=0;
    while(n)
    {
        v[n%10]=1;
        n/=10;
    }
    for(i=0;i<9;i+=2)
        if(v[i])p*=i;
    if(p==1)p=-1;
}

int main()
{
    produs(13579,p);
    cout<<p;
    return 0;
}