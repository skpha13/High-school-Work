#include <iostream>

using namespace std;

int n,a[1000],i,j,k,ok=1,p;

int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    for(i=1;i<=n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    while(ok)
    {
        i=2;
        while(i<=n)
        {
            if((a[i-1]+a[i])%2==0 && a[i]!=a[i-1])
            {
                for(j=n;j>=i;j--)
                    a[j+1]=a[j];
                a[i]=(a[i]+a[i-1])/2;
                n++;
                i+=2;
            }
                else
                {
                    i++;
                    p++;
                }
        }
        if(p==n-1)
            ok=0;
        p=0;
        if(ok)
        {
            for(i=1;i<=n;i++)
                cout<<a[i]<<" ";
            cout<<endl;
        }
    }
    return 0;
}
