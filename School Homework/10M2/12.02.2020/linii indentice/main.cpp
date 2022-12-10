#include <iostream>
#include <fstream>

using namespace std;

ifstream f("F1.txt");

int main()
{
    int x,a[10][10],i,j,n,m,ok=1,c=0,k,z=0,b[101];
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
            if(a[i][j]<=9)
                cout<<a[i][j]<<"    ";
                else
                    cout<<a[i][j]<<"   ";
        cout<<endl;
    }
    for(i=1;i<=n;i++){
        ok=1;
        k=1;
        for(j=1;j<=m;j++){
            z++;
            b[z]=a[i][j];
            }
        for(j=1;j<=m;j++){
            if(a[i][j]!=b[j])ok=0;
        }
        if(ok)c++;
    }
    cout<<endl;
    cout<<"Perechi de linii identice = "<<c;
    cout<<endl;
    f.close();
    return 0;
}
