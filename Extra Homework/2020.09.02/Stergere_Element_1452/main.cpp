#include <iostream>

using namespace std;

int n,i,x[1501],p;

int main()
{
    cin>>n>>p;
    for(i=1;i<=n;i++)
    {
        cin>>x[i];
    }
    for(i=p+1;i<=n;i++)
        x[i-1]=x[i];
    n--;
    for(i=1;i<=n;i++)
        cout<<x[i]<<" ";
    return 0;
}
