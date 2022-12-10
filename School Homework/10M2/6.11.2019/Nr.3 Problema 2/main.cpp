#include <iostream>

using namespace std;

int main()
{
    int a[101],n,i,x,j,p;
    cout<<"n=";cin>>n;
    for(i=1;i<=n;i++){
        cout<<"a["<<i<<"]=";cin>>a[i];
    }
    i=2;
    x=a[1];
    while(i<=n){
        if(x<a[i]){
            x=a[i];
            p=i;
        }
        i++;
    }
    for(i=1;i<=p-1;i++)
        for(j=i+1;j<=p-1;j++)
            if(a[i]>a[j])swap(a[i],a[j]);
    for(i=p;i<=n-1;i++)
        for(j=i+1;j<=n;j++)
            if(a[i]<a[j])swap(a[i],a[j]);
    cout<<"a=[";
    for(i=1;i<=n;i++)
        cout<<a[i]<<",";
    cout<<"]";
    return 0;
}
