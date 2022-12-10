#include <iostream>

using namespace std;

int n,a[27],x,p,i;

int main()
{
    cin>>n>>x>>p;
    for(i=1;i<=n;i++)
        cin>>a[i];
    for(i=n;i>=p;i--)
        a[i+1]=a[i];
    a[p]=x;
    n++;
    for(i=1;i<=n;i++)
        cout<<a[i]<<" ";
    return 0;
}
