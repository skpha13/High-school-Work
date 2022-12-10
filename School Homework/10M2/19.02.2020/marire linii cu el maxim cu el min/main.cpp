#include <iostream>
#include <fstream>

using namespace std;

ifstream f("F1.txt");

int x,a[10][10],i,j,n,m,y,i1,j1,k,z,b[101];

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
    y=a[1][1];
    for(k=2;k<=n*m;k++){
        i1=(k-1)/m+1;
        j1=(k-1)%m+1;
        if(y>a[i1][j1])y=a[i1][j1];
    }
    z=a[1][1];
    for(k=2;k<=n*m;k++){
        i1=(k-1)/m+1;
        j1=(k-1)%m+1;
        if(z<a[i1][j1])z=a[i1][j1];
    }
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            if(a[i][j]==z)b[i]++;
    k=0;
    for(i=1;i<=n;i++){
        k++;
        for(j=1;j<=m;j++)
            if(b[k])a[i][j]+=y;
    }
    cout<<"Matrice adunata cu el minim:";
    cout<<endl;
    afis();
    cout<<endl;
    f.close();
    return 0;
}
