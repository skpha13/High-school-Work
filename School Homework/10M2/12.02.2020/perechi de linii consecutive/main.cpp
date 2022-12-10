#include <iostream>
#include <fstream>

using namespace std;

ifstream f("F1.txt");

int main()
{
    int x,a[10][10],i,j,n,m,k,c=0;
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
    if(n==1)c=0;
        else{
            for(i=1;i<=n;i++){
                k=1;
                for(j=1;j<=m && k;j++)
                    if(a[i][j]!=a[i-1][j])k=0;
                if(k)c++;
            }
        }
    cout<<endl;
    cout<<"Perechi de linii consecutive identice = "<<c;
    cout<<endl;
    f.close();
    return 0;
}
