#include <iostream>

using namespace std;

int n,a[100001],i,s,x,v[100],c,j;

int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    for(i=1;i<=n;i++)
    {
        s=0;
        x=a[i];
        while(x)
        {
            s+=x%10;
            x/=10;
        }
        v[s]++;
    }
    for(i=1;i<100;i++)
        if(v[i]>=2)
            for(j=v[i]-1;j>=1;j--)
                c+=j;
    cout<<c;
    return 0;
}
