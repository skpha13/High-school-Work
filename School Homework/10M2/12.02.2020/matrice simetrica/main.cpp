#include <iostream>
#include <fstream>

using namespace std;

ifstream f("F1.txt");

int main()
{
    int x,a[10][10],i,j,n,m,b,ok=1;
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
    b=m;
     for(i=1;i<=n;i++){
        for(j=1;j<=m/2;j++){
            if(a[i][j]!=a[i][b])ok=0;
            b--;
        }
        b=m;
     }
    cout<<endl;
    if(ok==1)cout<<"DA";
        else
            cout<<"NU";
    cout<<endl;
    f.close();
    return 0;
}
