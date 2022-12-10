#include <iostream>

using namespace std;

int a[20][20],n,m,i,j,k=1;

int main()
{
    cin>>n;
    cin>>m;
    for(i=1;i<=n;i++)
    {
        a[i][1]=k;
        for(j=2;j<=m;j++)
            a[i][j]=a[i][j-1]+1;
        k++;
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
