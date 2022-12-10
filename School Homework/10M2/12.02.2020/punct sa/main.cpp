#include <iostream>
#include <fstream>

using namespace std;

ifstream f("F1.txt");

int main()
{
    int x,a[10][10],i,j,n,m,k=0,b[101],c[101],y;
    cout<<"n=";cin>>n;
    cout<<"m=";cin>>m;
    cout<<endl;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++){
            f>>x;
            a[i][j]=x;
        }
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            y=a[i][j-1];
            if(y<a[i][j])y=a[i][j];
        }
        k++;
        b[k]=y;
    }
    k=0;
    for(j=1;j<=m;j++){
        for(i=2;i<=n;i++){
            y=a[i-1][j];
            if(y>a[i][j])y=a[i][j];
        }
        k++;
        c[k]=y;
    }
    cout<<endl;
    cout<<"Puncutul sa al matricei = ";
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            if(b[i]==c[j])cout<<b[i];
    cout<<endl;
    f.close();
    return 0;
}
