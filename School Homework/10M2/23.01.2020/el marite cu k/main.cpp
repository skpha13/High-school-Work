#include <iostream>

using namespace std;

int main()
{
    int a[5][5],i,n,m,j,k;
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
    cout<<"k=";cin>>k;
    cout<<endl;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++)
            a[i][j]=a[i][j]+k;
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++)
            cout<<a[i][j]<<" ";
            cout<<endl;
        }
    return 0;
}
