#include <iostream>

using namespace std;

int prim(int n)
{
    if(n<2)return 0;
    for(int i=2;i*i<=n;i++)
        if(n%i==0)return 0;
    return 1;
}

int aprim(int a[100],int n)
{
    int i,s=0,p,u,ok=0;
    i=1;
    while(i<=n)
    {
        if(prim(a[i]) && !ok)
        {
            p=i;
            ok=1;
        }
        if(prim(a[i]))
            u=i;
        i++;
    }
    for(i=p+1;i<u;i++)
        s+=a[i];
    return s;
}

int main()
{
    int n,a[100],i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<"a["<<i<<"]=";
        cin>>a[i];
    }
    cout<<aprim(a,n);
    return 0;
}
