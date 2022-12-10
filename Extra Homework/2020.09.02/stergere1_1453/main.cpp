#include <iostream>

using namespace std;

int n,i,a[1001],j;

int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    i=1;
    while (i<=n)
        if (a[i]%2==0)
        {
            for(j=i+1;j<=n;j++)
                a[j-1]=a[j];
            n--;
        }
            else i++;

    for(i=1;i<=n;i++)
        cout<<a[i]<<" ";
    return 0;
}
