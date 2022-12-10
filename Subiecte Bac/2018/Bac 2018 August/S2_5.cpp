#include <iostream>

using namespace std;

int a[101][101],v[101],n,i,j;

int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>v[i];
    for(j=1;j<=n;j++)
        for(i=1;i<=n;i++)
            if(j%2==0)
                a[i][j]=v[i];
            else
                a[i][j]=v[n-i+1];
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}