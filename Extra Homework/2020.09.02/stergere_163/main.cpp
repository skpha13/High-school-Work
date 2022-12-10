#include <iostream>

using namespace std;

int n,i,a[1001],j,k,ok=1;

int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    i=1;
    while(i<=n)
    {
        ok=1;
        if(a[i]<2) ok=0;
        for(j=2;j*j<=a[i];j++)
        if(a[i]%j==0)
        {
            ok=0;
            break;
        }
        if(ok)
        {
            for(k=i+1;k<=n;k++)
                a[k-1]=a[k];
            n--;
        }
            else
                i++;
    }
    for(i=1;i<=n;i++)
        cout<<a[i]<<" ";
    return 0;
}
