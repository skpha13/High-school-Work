#include <iostream>

using namespace std;

int a[5][5],b[101],n,m,i,j,z,x=0,k,p=0;

void afis()
{
    cout<<endl;
    for(i=1;i<=n;i++)
        {for(j=1;j<=m;j++)
            cout<<a[i][j]<<" ";
         cout<<endl;
    }
}

int main()
{
    cout<<"n=";cin>>n;
    cout<<"m=";cin>>m;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++){
            cout<<"a["<<i<<"]["<<j<<"]=";cin>>a[i][j];
        }
    afis();
    cout<<endl;
    for(k=1;k<=1;k++){
        for(j=k;j<=n+1-k;j++)
            if(a[k][j]>x)x=a[k][j];
        for(i=k+1;i<=n+1-k;i++)
            if(a[i][n+1-k]>x)x=a[i][n+1-k];
        for(j=n-k;j>=k;j--)
            if(a[n+1-k][j]>x)x=a[n+1-k][j];
        for(i=n-k;i>=k+1;i--)
            if(a[i][k]>x)x=a[i][k];
    }
    for(k=1;k<=1;k++){
        for(j=k;j<=n+1-k;j++)
            if(a[k][j]==x)p++;
        for(i=k+1;i<=n+1-k;i++)
            if(a[i][n+1-k]==x)p++;
        for(j=n-k;j>=k;j--)
            if(a[n+1-k][j]==x)p++;
        for(i=n-k;i>=k+1;i--)
            if(a[i][k]==x)p++;
    }
    cout<<"elementul maxim de pe contur "<<x<<" "<<"si apare de "<<p;
    return 0;
}
