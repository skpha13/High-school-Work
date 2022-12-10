#include <iostream>

using namespace std;

int a,b,k;

int pnumar(int n)
{
    int s=0;
    for(int i=1;i*i<=n;i++)
        if(n%i==0)
        {
            s+=i;
            if(i*i<n)
                s+=n/i;
        }
    if(s%2==n%2)
        return 1;
    return 0;
}

int kpn(int a,int b,int k)
{
    int i,p=0;
    for(i=a;i<=b;i++)
    {
        if(pnumar(i))
            p++;
        if(p==k)
            return i;
    }
    return -1;
}

int main()
{
    cin>>a>>b>>k;
    cout<<kpn(a,b,k);
    return 0;
}
