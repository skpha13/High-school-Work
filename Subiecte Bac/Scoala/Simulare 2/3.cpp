#include <iostream>
#include <fstream>

using namespace std;

ifstream f("numere.in");

int n,m,a[101],b[1000001],c[1000102],i,j,k,ok;

int main()
{
    f>>n;
    for(i=1;i<=n;i++)
        f>>a[i];
    f>>m;
    for(i=1;i<=m;i++)
        f>>b[i];
    i=j=1;
    while(i<=n && j<=m)
        if(a[i]<b[j]) c[++k]=a[i++];
        else c[++k]=b[j++]; 
    while(i<=n) c[++k]=a[i++];
    while(j<=m) c[++k]=b[j++];
    for(i=1;i<=k;i++)
        if(c[i]%3==0 && c[i]!=c[i-1]) ok=1,cout<<c[i]<<" ";
    if(!ok)cout<<"nu exista";
    f.close();
    return 0;
}