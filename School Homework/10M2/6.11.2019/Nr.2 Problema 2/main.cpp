#include <iostream>

using namespace std;

int main()
{
    int a[101],n,i,x,j,p,k,y;
    cout<<"n=";cin>>n;
    for(i=1;i<=n;i++){
        cout<<"a["<<i<<"]=";cin>>a[i];
    }
    i=3;
    if(a[1]<a[2]){
        x=a[2];
        y=a[1];
    }
        else
        {
            x=a[1];
            y=a[2];
        }
    while(i<=n){
        if(x<a[i]){
            x=a[i];
            p=i;
        }
        if(y>a[i])
            {
            y=a[i];
            k=i;
            }
        i++;
    }
    for(i=k+1;i<=p-2;i++)
        for(j=i+1;j<=p-1 ;j++)
            if(a[i]<a[j])swap(a[i],a[j]);
    cout<<"a=[";
    for(i=1;i<=n;i++)
        cout<<a[i]<<",";
    cout<<"]";
    return 0;
}
