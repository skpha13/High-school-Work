#include <iostream>

using namespace std;

int main()
{
    int n,i,a[101];
    cout<<"n=";cin>>n;
    a[1]=n;
    for(i=2;i<=n;i++){
        a[i]=a[i-1]-1;
    }
    cout<<"A= ";
    for(i=1;i<=n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"Al n-lea termen: "<<n;
    return 0;
}
