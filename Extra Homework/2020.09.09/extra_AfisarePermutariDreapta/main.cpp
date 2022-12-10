#include <iostream>

using namespace std;

int n,a[16],i,k,aux;

int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    for(i=1;i<=n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    for(k=1;k<n;k++)
    {
        aux=a[n];
        for(i=n;i>=1;i--)
            a[i+1]=a[i];
        a[1]=aux;
        for(i=1;i<=n;i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }
    return 0;
}
