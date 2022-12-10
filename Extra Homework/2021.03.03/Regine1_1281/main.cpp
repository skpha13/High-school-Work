#include <iostream>
#include <cstdlib>

using namespace std;

int x[15],n,m;

void afis(int k)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            if(x[i]==j)cout<<"*"<<" ";
            else
                cout<<"-"<<" ";
        cout<<endl;
    }
    exit(0);
}

int valid(int k)
{
    int i;
    for(i=1;i<k;i++)
        if(x[k]==x[i] || abs(x[k]-x[i])==k-i)return 0;
    return 1;
}

void btk(int k)
{
    int i;
    for(i=1;i<=n;i++)
    {
        x[k]=i;
        if(valid(k))
            if(k==n)afis(k);
                else
                    btk(k+1);
    }
}

int main()
{
    cin>>n;
    btk(1);
    return 0;
}
