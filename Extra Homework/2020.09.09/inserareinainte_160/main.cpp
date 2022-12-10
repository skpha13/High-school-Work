#include <iostream>
#include <math.h>

using namespace std;

int n,a[202],i,j,k;

int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    i=1;
    while(i<=n)
    {
        if(sqrt(a[i])==floor(sqrt(a[i])))
        {
            for(j=n;j>=i;j--)
                a[j+1]=a[j];
            a[i]=sqrt(a[i]);
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
