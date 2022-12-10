#include <iostream>

using namespace std;

int a[21][21],n,i,j,k,x;

int main()
{
    cin>>n>>k;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            cin>>a[i][j];
    x=a[k][k-1];
    j=k-1;
    while(j>=2)
    {
        a[k][j]=a[k][j-1];
        j--;
    }
    cout<<endl;
    a[k][1]=x;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}