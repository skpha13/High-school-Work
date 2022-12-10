#include <iostream>

using namespace std;

int a[21][21],i,j,n;

int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        a[1][i]=n;
        a[i][n]=n-i+1;
    }
    for(i=2;i<=n;i++)
        for(j=n-1;j>=1;j--)
            a[i][j]=a[i-1][j]+a[i][j+1];
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++) cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
    

