#include <iostream>

using namespace std;

int n,i,a[500],j,k;

int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    i=2;
    while(i<=n)
    {
        if((a[i-1]+a[i])%2==0)
        {
            for(j=n;j>=i;j--)
                a[j+1]=a[j];
            a[i]=(a[i]+a[i-1])/2;
            n++;
            i+=2;
        }
            else
                i++;
    }
    for(i=1;i<=n;i++)
        cout<<a[i]<<" ";
    return 0;
}
