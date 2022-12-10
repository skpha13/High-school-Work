#include <iostream>
#include <algorithm>

using namespace std;

int n,a[1001],v[10001],i;

int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        v[a[i]]=i;
    }
    sort(a+1,a+n+1);
    for(i=1;i<=n;i++)
        cout<<v[a[i]]<<" ";
    return 0;
}
