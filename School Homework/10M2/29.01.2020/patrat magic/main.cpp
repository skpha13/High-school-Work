#include <iostream>

using namespace std;

int a[5][5],b[101],n,m,i,j,s1=0,s2=0,s3=0,k=0,z,ok=1,s4=0,x;

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
        for(j=1;j<=m;j++){
            s1+=a[i][j];
            if(i==j)
                s2+=a[i][j];
            x=n+1;
            if(i+j==x)
                s4+=a[i][j];
            if(j==m){
                k++;
                b[k]=s1;
                s1=0;
            }
        }
    }
    k++;
    b[k]=s2;
    k++;
    b[k]=s4;
    for(j=1;j<=m;j++){
        for(i=1;i<=n;i++){
            s3+=a[i][j];
            if(i==n){
                k++;
                b[k]=s3;
                s3=0;
            }
        }
    }
    for(i=2;i<=k;i++)
        if(b[i]!=b[1])ok=0;
    if(ok==1)
        cout<<"Matricea este patrat magic";
    return 0;
}
