#include <iostream>

using namespace std;

int a[21][21],i,j,n,k=1,p;

int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        a[n-i+1][i]=n;
    for(i=1;i<n;i++)
    {
        k=i;
        for(j=1;j<=n-i;j++)
        {
            a[i][j]=a[n-j+1][n-i+1]=k;
            k++;
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
