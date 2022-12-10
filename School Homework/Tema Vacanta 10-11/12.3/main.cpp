#include <iostream>
#include <fstream>

using namespace std;

ifstream f("nr1.txt");
ifstream g("nr2.txt");

int main()
{
    int n,m,i=0,j=0,a[101],b[101],x,ok=1,c[101],k=0;
    while(!f.eof()){
        f>>x;
        i++;
        a[i]=x;
    }
    n=i;
    while(!g.eof()){
        g>>x;
        j++;
        b[j]=x;
    }
    m=j;
    for(i=1;i<=n;i++)
        if(a[i]%5==0){
            j=1;
            while(ok && j<=m){
                if(a[i]==b[j])ok=0;
                j++;
            }
            if(ok){
                k++;
                c[k]=a[i];
            }
            ok=1;
        }
    for(j=1;j<=m;j++)
        if(b[j]%5==0){
            i=1;
            while(ok && i<=n){
                if(b[j]==a[i])ok=0;
                i++;
            }
            if(ok){
                k++;
                c[k]=b[j];
            }
            ok=1;
        }
    for(i=1;i<k;i++)
        for(j=i+1;j<=k;j++)
            if(c[i]>c[j])swap(c[i],c[j]);
    for(i=1;i<=k;i++){
        cout<<c[i]<<" ";
    }
    return 0;
}
