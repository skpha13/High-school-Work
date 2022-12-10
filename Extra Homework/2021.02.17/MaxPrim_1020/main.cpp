#include <iostream>

using namespace std;

int n,v[1001],i;

int prim(int n)
{
    if(n<2)return 0;
    for(int i=2;i*i<=n;i++)
        if(n%i==0)return 0;
    return 1;
}

int maxi(int i,int j)
{
    int a,b,m;
    if(i==j)return v[i];
    else
    {
        m=(i+j)/2;
        a=maxi(i,m);
        b=maxi(m+1,j);
        if(a>b && prim(a))return a;
        else
            if(prim(b))
                return b;
    }
}

int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>v[i];
    cout<<maxi(1,n);
    return 0;
}
