#include <iostream>

using namespace std;

int n,a[52],i,j;

int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    i=1;
    while(i<=n)
    {
        if(a[i]%2==0)
        {
            for(j=n;j>=i+1;j--)
                a[j+1]=a[j];
            a[i+1]=a[i]*2;
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
