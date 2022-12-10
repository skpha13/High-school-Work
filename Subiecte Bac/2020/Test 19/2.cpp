#include <iostream>

using namespace std;

int m,n,k,a[21][21],ok,verif,i,j;

int main()
{
    cin>>m>>n>>k;
    for(i=1;i<=m;i++)
        for(j=1;j<=n;j++)
            cin>>a[i][j];
    for(i=1;i<=m;i++)
    {
        ok=1;
        for(j=1;j<=n;j++)
            if(a[i][j]==a[k][j])ok=0;
        if(ok)
        {
            cout<<"DA";
            verif=1;
            break;
        }
    }
    if(!verif)cout<<"NU";
    return 0;
}