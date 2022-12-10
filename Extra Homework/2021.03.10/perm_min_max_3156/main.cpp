#include <iostream>

using namespace std;

int x[11],n,v[11],mn,mx,p,l;

void afis(int k)
{
    int i;
    for(i=1;i<=k;i++)
        cout<<x[i]<<" ";
    cout<<endl;
}

int valid(int k)
{
    int i;
    for(i=1;i<k;i++)
    {
        if(x[k]==x[i])return 0;
        if(i==p && x[i]!=mx)return 0;
        if(i==l && x[i]!=mn)return 0;
    }
    return 1;
}

void btk(int k)
{
    int i;
    for(i=1;i<=n;i++)
    {
        x[k]=v[i];
        if(valid(k))
            if(k==n)afis(k);
            else
                btk(k+1);
    }
}

int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>v[i];
    mn=mx=v[1];
    for(int i=2;i<=n;i++)
    {
        if(v[i]>mx)
        {
            mx=v[i];
            p=i;
        }
        if(v[i]<mn)
        {
            mn=v[i];
            l=i;
        }
    }
    for(int i=1;i<n;i++)
        for(int j=i+1;j<=n;j++)
            if(v[i]>v[j])
                swap(v[i],v[j]);
    btk(1);
    return 0;
}
