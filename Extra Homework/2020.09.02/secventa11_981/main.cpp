#include <iostream>

using namespace std;

int n,i,a[300001],v[300001],j,ok=0,l,lmax;

int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    v[1]=1;
    for(i=2;i<=300001;i++)
    {
        v[i]=v[i-1]*2+1;
    }
    for(i=1;i<=n;i++)
    {
        if(!ok)
            for(j=1;j<=n;j++)
                if(a[i]==v[j])
                {
                    ok=1;
                    break;
                }
        if(ok)
        {
            l++;
            if(l>lmax)
                lmax=l;
        }
            else
                l=0;
        ok=0;
    }
    cout<<lmax;
    return 0;
}
