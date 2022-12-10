#include <iostream>

using namespace std;

int n,m,i,j,a[20][20],v[20];

void nrzero()
{
    int mx=0;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            if(a[i][j]==0)
                v[i]++;
    for(i=1;i<=n;i++)
        if(mx<v[i])mx=v[i];
    for(i=1;i<=n;i++)
        if(mx==v[i])cout<<i<<" ";
}

int main()
{
    cout<<"n=";cin>>n;
    cout<<"m=";cin>>m;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
        {
            cout<<"a["<<i<<"]["<<j<<"]=";
            cin>>a[i][j];
        }
    cout<<endl;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl;
    nrzero();
    return 0;
}
