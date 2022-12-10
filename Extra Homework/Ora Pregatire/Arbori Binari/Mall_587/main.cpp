#include <iostream>

using namespace std;

int n,m,a[101][101],i,j,k,ok;

void adiacenta(int a[101][101])
{
    int x,y;
    cin>>n>>m;
    for(i=1;i<=m;i++)
    {
        cin>>x>>y;
        a[x][y]=1;
    }
}

void RoyWarshall(int a[101][101])
{
    for(k=1;k<=n;k++)
        for(i=1;i<=n;i++)
            for(j=1;j<=n;j++)
                if(a[i][j]==0)
                    a[i][j]=a[i][k]*a[k][j];
}

int main()
{
    adiacenta(a);
    RoyWarshall(a);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    for(j=1;j<=n;j++)
    {
        ok=1;
        for(i=1;i<=n;i++)
            if(i!=j && !a[i][j])
            {
                ok=0;
                break;
            }
        if(ok)
        {
            cout<<j;
            return 0;
        }
    }
    cout<<"NU EXISTA";
    return 0;
}
