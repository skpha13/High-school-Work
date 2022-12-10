#include <iostream>

using namespace std;

int n,s,c,ok=1;

int sub(int n)
{
    int f1,f2;
    if(n<=5)
        return n;
    else
    {
        f1=5;
        f2=2*f1;
        while(f2<=n)
        {
            f1=f2;
            f2=2*f1;
            if(f2==n)
                return f2;
        }
        return f1;
    }
}

int main()
{
    cout<<"n=";cin>>n;
    c=n;
    if(c<6)
    {
        cout<<c;
        ok=0;
    }

    if(c==sub(c) && ok)
    {
        cout<<c;
        ok=0;
    }
    while(s!=n-n%10 && ok)
    {
        if(c==sub(c))
            c/=2;
        c=sub(c);
        s+=c;
        cout<<c<<" ";
    }
    if(n%10!=0 && ok)
        cout<<n%10;
    return 0;
}
