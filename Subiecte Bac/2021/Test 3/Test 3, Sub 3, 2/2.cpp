#include <iostream>

using namespace std;

int a[21][21],m,n,i,j;

int main()
{
    cin>>m>>n;
    for(i=1;i<=m;i++)
        for(j=1;j<=n;j++) cin>>a[i][j];
    for(i=1;i<=m;i++)
        for(j=1;j<=n;j++)
            if(a[i][1]==a[j][n] && a[i][1])
            {  
                cout<<a[i][1]<<" ";
                break;
            }
    return 0;
}