#include <iostream>

using namespace std;

int Egal(int n)
{
    int c,v[10],p=-1,ok=1,t;
    while(n)
    {
        c=n%10;
        if(c%2!=0)
            v[c]=1;
        n/=10;
    }
    for(int i=0;i<9;i++)
        if(i%2!=0 && v[i]==1)
        {
            if(p==i)ok=0;
            p=i;
        }
    if(ok)t=1;
        else
            t=0;
    return t;
}
