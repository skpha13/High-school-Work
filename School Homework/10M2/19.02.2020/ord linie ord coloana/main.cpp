#include <iostream>
#include <fstream>

using namespace std;

ifstream f("F1.txt");

int x,a[10][10],i,j,n,m,p=1,k,l,i1,j1,i2,j2,z=1;

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
    while(z<=n){
        for(k=p;k<z*m;k++){
            i1=(k-1)/m+1;
            j1=(k-1)%m+1;
            for(l=k+1;l<=m*z;l++){
                i2=(l-1)/m+1;
                j2=(l-1)%m+1;
                if(a[i1][j1]>a[i2][j2])swap(a[i1][j1],a[i2][j2]);
            }
        }
        p+=m;
        z++;
    }
    p=1;
    z=1;
    while(z<=n){
        for(k=p;k<z*m;k++){
            i1=(k-1)%m+1;
            j1=(k-1)/m+1;
            for(l=k+1;l<=m*z;l++){
                i2=(l-1)%m+1;
                j2=(l-1)/m+1;
                if(a[i1][j1]>a[i2][j2])swap(a[i1][j1],a[i2][j2]);
            }
        }
        p+=n;
        z++;
    }
    cout<<"Matricea ordonata pe linii si dupa pe coloane:";
    cout<<endl;
    afis();
    f.close();
    return 0;
}
