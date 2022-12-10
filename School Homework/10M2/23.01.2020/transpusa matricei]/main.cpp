#include <iostream>

using namespace std;

int main()
{
    int a[5][5],i,n,m,j,k=0,c[101],z;
    cout<<"n=";cin>>n;
    cout<<"m=";cin>>m;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++){
            cout<<"a["<<i<<"[]"<<j<<"]=";cin>>a[i][j];
        }
    cout<<endl;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++)
            cout<<a[i][j]<<" ";
            cout<<endl;
        }
    cout<<endl;
    for(j=1;j<=m;j++){
        for(i=1;i<=n;i++)
        {
            k++;
            c[k]=a[i][j];
        }
    }
    for(i=1;i<=m;i++)
        for(j=1;j<=n;j++)
            for(z=1;z<=k;z++)
                a[i][j]=c[z];
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++)
            cout<<a[i][j]<<" ";
            cout<<endl;
        }
    return 0;
}
