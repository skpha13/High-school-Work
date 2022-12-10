#include <iostream>

using namespace std;

int a,v[5],i,x,j=1,ok=1;

int f(int a)
{
    int s=0,fc=2,p;
    while(a>1)
    {
        p=0;
        while(a%fc==0)
        {
            a/=fc;
            p++;
        }
        if(p)
            s+=p;
        fc++;
    }
    return s;
}

int main()
{
    cin>>a;
    i=3;
    while(a)
    {
        v[i]=a%10;
        i--;
        a/=10;
    }
    while(j<=3)
    {
        x=0;
        for(i=1;i<=3;i++)
            x=x*10+v[i];
        if(f(x)!=1)
        {
            ok=0;
            break;
        }
        for(i=1;i<3;i++)
            swap(v[i],v[i+1]);
        j++;
    }
    if(ok)
        cout<<"DA";
    else
        cout<<"NU";
    return 0;
}
