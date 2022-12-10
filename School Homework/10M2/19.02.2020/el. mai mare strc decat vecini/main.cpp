#include <iostream>
#include <fstream>

using namespace std;

ifstream f("F1.txt");

int x,a[10][10],i,j,n,m,ok=1;

void afis(){
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            if(a[i][j]<=9)cout<<" "<<a[i][j]<<"  ";
                else
                    cout<<a[i][j]<<"  ";
        }
        cout<<endl;
    }
}

int main()
{
    cout<<"n=";cin>>n;
    cout<<"m=";cin>>m;
    cout<<endl;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++){
            f>>x;
            a[i][j]=x;
        }
    afis ();
    cout<<endl;
    cout<<"Elemente strict mai mari decat vecinii sai=";
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++){
                if(a[i][j]>a[i-1][j] && a[i][j]>a[i][j-1] && a[i][j]>a[i+1][j] && a[i][j]>a[i][j+1])
                    ok=0;
                if(ok==0){
                    cout<<a[i][j]<<",";
                    ok=1;
                }
        }
    cout<<endl;
    f.close();
    return 0;
}
