#include <iostream>

using namespace std;

int main()

{
    int a[5][5],b[5][5],i,n,m,j,ok=1;
    cout<<"n=";cin>>n;
    cout<<"m=";cin>>m;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++){
            cout<<"a["<<i<<"[]"<<j<<"]=";cin>>a[i][j];
        }
    cout<<endl;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++){
            cout<<"b["<<i<<"[]"<<j<<"]=";cin>>b[i][j];
        }
    cout<<"A=";
    cout<<endl;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++)
            cout<<a[i][j]<<" ";
            cout<<endl;
        }
    cout<<endl;
    cout<<"B=";
    cout<<endl;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++)
            cout<<b[i][j]<<" ";
            cout<<endl;
        }
    cout<<endl;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++)
            if(a[i][j]!=b[i][j])ok=0;
        }
    if(ok==1)cout<<"Matrice egale";
        else
            cout<<"Matrice nu sunt egale";
    return 0;
}
