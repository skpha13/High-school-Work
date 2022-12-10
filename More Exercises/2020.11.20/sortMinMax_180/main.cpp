#include <iostream>
#include <algorithm>

using namespace std;

int n,a[1001],i,mn,mx,p,u;

int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    mn=mx=a[1];
    for(i=2;i<=n;i++)
    {
        if(mn>a[i])
        {
            mn=a[i];
            p=i;
        }
        if(mx<a[i])
        {
            mx=a[i];
            u=i;
        }
    }
    if(p>u)
        swap(p,u);
    sort(a+p,a+u+1);
    for(i=1;i<=n;i++)
        cout<<a[i]<<" ";
    return 0;
}
