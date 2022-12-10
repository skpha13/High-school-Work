#include <iostream>
#include <fstream>

using namespace std;

ifstream f("F1.txt");

int x,a[10][10],i,j,n,m,b[101],k=0;

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
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            if(j<i && i+j<n+1){
                k++;
                b[k]=a[i][j];
            }
    for(i=1;i<k;i++)
        for(j=i+1;j<=k;j++)
            if(b[i]>b[j])swap(b[i],b[j]);
    for(i=1;i<k;i++)
        for(j=i+1;j<=k;j++)
            if(b[i]==b[j])b[i]=0;
    cout<<"Elementele din zona ordonate crescator:";
    for(i=1;i<=k;i++)
        if(b[i]!=0)cout<<b[i]<<",";
    cout<<endl;
    f.close();
    return 0;
}
