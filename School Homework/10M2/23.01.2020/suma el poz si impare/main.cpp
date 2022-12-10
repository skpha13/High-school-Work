#include <iostream>

using namespace std;

int main()
{
    int a[5][5],i,n,m,j,s=0;
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
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++)
            if(a[i][j]>=0 && a[i][j]%2!=0)
                s=s+a[i][j];
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++)
            cout<<a[i][j]<<" ";
            cout<<endl;
        }
    cout<<endl;
    cout<<"Suma elementelor pozitive si impare="<<s;
    return 0;
}
