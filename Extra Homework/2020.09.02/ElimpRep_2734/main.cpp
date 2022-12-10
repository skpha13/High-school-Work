#include <iostream>

using namespace std;

int n,i,a[1001],b,j,k;

int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    i=1;
    for(i=1;i<=n;i++)
    {
        b=a[i];
        for(j=i+1;j<=n;j++)
            if(b==a[j])
            {
                for(k=j+1;k<=n;k++)
                    a[k-1]=a[k];
                n--;
                j--;
            }
    }
    for(i=1;i<=n;i++)
        cout<<a[i]<<" ";
    return 0;
}
