#include <iostream>
#include <fstream>

using namespace std;

ifstream f("numere.txt");

int main()
{
    int n,x,m,i,a[101],j;
    f>>x;
    n=x;
    f>>x;
    m=x;
    a[1]=m;
    for(i=2;i<=n;i++){
        f>>x;
        a[i]=x;
    }
    for(i=1;i<n;i++)
        for(j=i+1;j<=n;j++)
            if(a[i]>a[j])swap(a[i],a[j]);
    for(i=1;i<=n;i++)
        if(a[i]==m)cout<<i;
    return 0;
    f.close();
}
