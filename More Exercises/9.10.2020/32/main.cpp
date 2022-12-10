#include <iostream>

using namespace std;

int a[20][20],n,m,i,j,k;

int main()
{
    cin>>n;
    cin>>m;
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
    for(i=1;i<n;i++)
        for(k=i+1;k<=n;k++)
            for(j=1;j<=m;j++)
                if(a[i][m]%2==0 && a[k][m]%2==0 && a[i][m]>a[k][m])
                    swap(a[i][j],a[k][j]);
    cout<<endl;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
