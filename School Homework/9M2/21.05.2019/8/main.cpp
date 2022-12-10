#include <iostream>

using namespace std;

int main()
{
    int n,i,a[101],k;
    cout<<"n=";cin>>n;
    for (i=1;i<=n;i++){
        cout<<"a["<<i<<"]=";cin>>a[i];
    }
    k=2;
    while(k<=n){
        n=n+1;
        for (i=n;i>=k;i--)
            a[i]=a[i-1];
        a[k]=0;
        k++;
    }
     cout<<"a[";
    for(i=1;i<=n;i++)
        cout<<a[i]<<",";
    cout<<"]";
    return 0;
}
