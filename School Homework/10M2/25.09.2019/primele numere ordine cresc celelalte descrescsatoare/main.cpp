#include <iostream>

using namespace std;

int main()
{
    int n,i,a[101],j;
    cout<<"n=";cin>>n;
    for (i=1;i<=n;i++){
        cout<<"a["<<i<<"]=";cin>>a[i];
    }
    for(i=1;i<=n-1;i++){
        for (j=i+1;j<=n;j++)
            if(a[i]/2!=0 && a[j]/2==0) swap(a[i],a[j]);
    }
    for (i=1;i<=n-1;i++){
        for (j=i+1;j=n;j++){
            if(a[i]/2==0 && a[i]>a[j]) swap(a[i],a[j]);
        }
    }
    for (i=1;i<=n-1;i++){
        for (j=i+1;j=n;j++){
            if(a[i]/2!=0 && a[i]<a[j]) swap(a[i],a[j]);
        }
    }
    cout<<"a=";
    for (i=1;i<=n;i++){
        cout<<a[i]<<",";
    }
    return 0;
}
