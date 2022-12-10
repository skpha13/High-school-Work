#include <iostream>

using namespace std;

int a[5][5],b[101],n,m,i,j,k=0,z,x=0,c[101],v;

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
            if(a[i][j]==1)b[i]++;
        }
    for(i=1;i<=n;i++)
        if(b[i]>x)
            x=b[i];
    cout<<"a) "<<"elevul care cunoaste pe cei mai multi dintre colegii sai este ";
    for(i=1;i<=n;i++)
        if(b[i]==x)cout<<i<<",";
    cout<<endl;
    x=0;
    for(j=1;j<=m;j++)
        for(i=1;i<=n;i++)
            if(a[i][j]==1)c[j]++;
    for(j=1;j<=m;j++)
        if(c[j]>x)
            x=c[j];
    cout<<"b) "<<"elevul care este cunoscut de cei mai multi dintre colegii sai este ";
    for(j=1;j<=m;j++)
        if(c[j]==x)cout<<j<<",";
    cout<<endl;
    cout<<"c) "<<"perechile de elevi care se cunosc reciproc sunt ";
    if(n%2!=0)v=n/2+1;
        else
            v=n/2;
    for(i=1;i<=v;i++)
        for(j=1;j<=m;j++)
            if(a[i][j]==1 && a[j][i]==1)cout<<"("<<i<<","<<j<<") ";
    return 0;
}
