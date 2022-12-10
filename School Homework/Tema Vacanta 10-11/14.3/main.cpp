#include <iostream>

using namespace std;

int main()
{
    int n,a[101],i,j;
    cout<<"n=";cin>>n;
    for(i=1;i<=n;i++){
        cout<<"a["<<i<<"]=";cin>>a[i];
    }
    for(i=1;i<n;i++)
        for(j=i+1;j<=n;j++)
            if(a[i]>a[j])swap(a[i],a[j]);
    cout<<endl;
    for(i=1;i<=n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
