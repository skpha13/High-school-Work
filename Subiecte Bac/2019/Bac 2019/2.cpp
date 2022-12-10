#include <iostream>

using namespace std;

int m,n,a[22][22],i,j,ok=1;

int main()
{
    cin>>m>>n;
    for(i=1;i<=m;i++)
        for(j=1;j<=n;j++)
            cin>>a[i][j];
    for(i=1;i<=m;i++)
        for(j=1;j<=n/2;j++)
            if(a[i][j]!=a[i][n-j+1])
            {
                ok=0;
                break;
            }
    if(!ok) cout<<"NU";
    else cout<<"DA";
    return 0;
}