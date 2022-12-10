#include <iostream>

using namespace std;

int a,b,ok=1,i,v[10],x,p=1;

int cif(int a,int b)
{
    int k=0;
    while(a)
    {
        if(a%10==b)
            k++;
        a/=10;
    }
    return k;
}

int main()
{
    cin>>a;
    for(i=0;i<=9;i++)
        v[i]=cif(a,i);
    for(i=0;i<=9;i++)
        if(v[i]%2!=0)
            ok=0;
    if(ok)
    {
        for(i=0;i<=9;i++)
            if(v[i]>1)
                x=x*10+i;
        for(i=9;i>=1;i--)
            if(v[i]>1)
                x=x*10+i;
        cout<<x;
    }
    else
        cout<<"0";
    return 0;
}
