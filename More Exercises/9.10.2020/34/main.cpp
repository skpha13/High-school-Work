#include <iostream>

using namespace std;

int oglindit(int x)
{
    int ogl=0;
    if(x<10)return x;
    while(x)
    {
        ogl=ogl*10+x%10;
        x/=10;
    }
    return ogl;
}

int a[20][20],n,m,i,j,v[20],mx;

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
        for(j=1;j<=m;j++)
            if(a[i][j]==oglindit(a[i][j]))
                v[i]++;
    for(i=1;i<=20;i++)
        if(mx<v[i])
            mx=v[i];
    cout<<endl;
    for(i=1;i<=n;i++)
        if(mx==v[i])
            cout<<i<<" ";
    return 0;
}
