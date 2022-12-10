#include <iostream>

using namespace std;

int main()
{
    int n,i,a[101],j,k;
    cout<<"n=";cin>>n;
    cout<<"k=";cin>>k;
    for (i=1;i<=n;i++){
        cout<<"a["<<i<<"]=";cin>>a[i];
    }
    for (i=1;i<=k-1;i++)
        for (j=i+1;j<=k;j++)
            if (a[i]>a[j]) swap(a[i],a[j]);
    for (i=k+1;i<=n-1;i++)
        for (j=i+1;j<=n;j++)
            if (a[i]<a[j]) swap(a[i],a[j]);
    cout<<"a=";
    for(i=1;i<=n;i++)
        cout<<a[i]<<",";
    return 0;
}
