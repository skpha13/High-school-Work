#include <iostream>

using namespace std;

int n,k,a[21][21],i,j,x;

int main()
{
    cin>>n>>k;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            cin>>a[i][j];
    x=a[k][1];
    for(i=1;i<=n;i++)
        if(i+k>=n+1)break;
        else
            a[k][i]=a[k][i+1];
    a[k][i]=x;
    cout<<endl;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}