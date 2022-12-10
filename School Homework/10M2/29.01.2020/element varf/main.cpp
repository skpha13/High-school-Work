#include <iostream>

using namespace std;

int a[5][5],n,m,i,j,ok=1;

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
    cout<<"elemente varf=";
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++){
                if(a[i][j]>a[i-1][j] && a[i][j]>a[i][j-1] && a[i][j]>a[i+1][j] && a[i][j]>a[i][j+1])
                    ok=0;
                if(ok==0){
                    cout<<a[i][j]<<",";
                    ok=1;
                }
        }
    return 0;
}
