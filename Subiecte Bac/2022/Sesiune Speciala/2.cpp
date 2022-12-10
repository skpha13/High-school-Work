#include <iostream>

using namespace std;

int n,a[101][101],i,j;

int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++) cin>>a[i][j];
    for(i=1;i<n;i++)
        for(j=i;j<=n;j++) a[i][j]=a[i][j+1];
    for(i=1;i<=n;i++)
    {
        for(j=1;j<n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}