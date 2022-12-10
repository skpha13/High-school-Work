#include <iostream>

using namespace std;

int prim(int x)
{
    int i;
    if(x<2)return 0;
    for(i=2;i*i<=x;i++)
        if(x%i==0)return 0;
    return 1;
}

int a[20][20],n,m,i,j,k;

int main()
{
    cin>>n;
    cin>>m;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
        {
            cout<<"a["<<i<<"]["<<j<<"]=";
            cin>>a[i][j];
        }
    cout<<endl;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    for(i=1;i<=n;i++)
        if(prim(a[i][1])==1)
            {
                j=1;
                k=m;
                while(j<=m/2 && k>m/2)
                {
                    swap(a[i][j],a[i][k]);
                    j++;
                    k--;
                }
            }
    cout<<endl;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
