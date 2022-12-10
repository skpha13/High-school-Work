#include <iostream>

using namespace std;

int x[25001],n,m,y[200001],k;

int cb(int i,int j)
{
    int m;
    if(i>j)return 0;
    else
    {
        m=(i+j)/2;
        if(y[k]==x[m])return 1;
        else
            if(y[k]<x[m])cb(i,m-1);
            else
                cb(m+1,j);
    }
}

int main()
{
    cin>>n;
    for(k=1;k<=n;k++)
        cin>>x[k];
    cin>>m;
    for(k=1;k<=m;k++)
        cin>>y[k];
    for(k=1;k<=m;k++)
        cout<<cb(1,n)<<" ";
    return 0;
}
