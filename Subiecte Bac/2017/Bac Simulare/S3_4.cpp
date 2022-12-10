#include <iostream>
#include <fstream>

using namespace std;

ifstream f("bac.in");

int m,n,i,j,a[100001],v[100001],x,k;

int main()
{
    f>>m>>n;
    for(j=1;j<=m;j++) f>>v[j];
    f>>x;i=1;j=1;
    while(i<=n && j<=m)
        if(x<v[j])
        {
            if(x%2==0) a[++k]=x;
            f>>x;
            i++;
        }
        else
            {
                if(v[j]%2==0) a[++k]=v[j];
                if(x==v[j]) {f>>x; i++;}
                j++;
            }
    while(i<=n)
    {
        if(x%2==0) a[++k]=x;
        f>>x;
        i++;
    }
    while(j<=m)
    {
        if(v[j]%2==0)
            a[++k]=v[j];
        j++;
    }
    if(k)
        for(i=k;i>=1;i--) cout<<a[i]<<" ";
    else cout<<"nu exista";
    f.close();
    return 0;
}
    

