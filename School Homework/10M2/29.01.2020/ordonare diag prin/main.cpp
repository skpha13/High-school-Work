#include <iostream>

using namespace std;

int a[5][5],n,m,i,j,b[101],k=0;

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
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++){
            if(i==j){
                k++;
                b[k]=a[i][j];
            }
        }
    for(i=2;i<=k;i++)
        if(b[1]>b[i])swap(b[1],b[i]);
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++){
            if(i==j){
                a[i][j]=b[i];
                i++;
            }
        }
    afis();
    return 0;
}
