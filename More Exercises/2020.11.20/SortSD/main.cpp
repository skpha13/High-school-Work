#include <iostream>

using namespace std;

int a[1001],n,i,v[1001],j;

int sumdiv(int n)
{
    int i,s=0;
    for(i=1;i*i<n;i++)
        if(n%i==0)
        {
            s+=i;
            s+=n/i;
        }
    if(i*i==n)s+=i;
    return s;
}

int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        v[i]=sumdiv(a[i]);
    }
    for(i=1;i<n;i++)
        for(j=i+1;j<=n;j++)
            if(v[i]>v[j])
            {
                swap(a[i],a[j]);
                swap(v[i],v[j]);
            }
            else
                if(v[i]==v[j] && a[i]>a[j])
                    swap(a[i],a[j]);
    for(i=1;i<=n;i++)
        cout<<a[i]<<" ";
    return 0;
}
