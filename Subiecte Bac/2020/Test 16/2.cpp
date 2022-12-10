#include <iostream>

using namespace std;

int a[101][101],n,m,i,j,k=1;

int main()
{
    cin>>n>>m;
    for(i=n;i>=1;i--)
        for(j=m;j>=1;j--)
        {
            a[i][j]=k*k;
            k+=2;
        }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}