#include <iostream>

using namespace std;

int a[5][5],b[101],n,m,i,j,k=0,z,x=0,p;

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
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++)
            if(a[i][j]==0)b[i]++;
        }
    for(i=1;i<=n;i++){
        if(b[i]>x)
            x=b[i];
    }
    for(i=1;i<=n;i++)
        if(b[i]==x)p=i;
    cout<<"linia cu cele mai multe numere nenule="<<p;
    for(i=1;i<=n;i++)
        if(b[i]==x && i!=p)cout<<" "<<i;
    return 0;
}
