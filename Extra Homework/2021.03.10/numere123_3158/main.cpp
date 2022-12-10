#include <iostream>

using namespace std;

int x[50],n,v[50],p;

void afis(int k)
{
    int i;
    for(i=1;i<=p;i++)
        cout<<v[x[i]];
    cout<<endl;
}

int valid(int k)
{
    int i;
    for(i=1;i<k;i++)
        if(x[k]==x[i])return 0;
    return 1;
}

void btk(int k)
{
    int i;
    for(i=1;i<=p;i++)
    {
        x[k]=i;
        if(valid(k))
            if(k==p)afis(k);
            else
                btk(k+1);
    }
}

int main()
{
    cin>>n;
    while(n)
    {
        v[++p]=n%10;
        n/=10;
    }
    for(int i=1;i<p;i++)
        for(int j=i+1;j<=p;j++)
            if(v[i]>v[j])swap(v[i],v[j]);
    btk(1);
    return 0;
}
