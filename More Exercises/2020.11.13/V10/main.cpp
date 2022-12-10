#include <iostream>

using namespace std;

int n,a,b;

void sub(int n,int &a,int &b)
{
    int ok,i,m=n;
    while(1)
    {
        ok=1;
        if(n<2)ok=0;
        for(i=2;i*i<=n;i++)
            if(n%i==0)
            {
                ok=0;
                break;
            }
        if(ok)
        {
            b=n;
            break;
        }
        n++;
    }
    while(1)
    {

        ok=1;
        if(m<2)ok=0;
        for(i=2;i*i<=m;i++)
            if(m%i==0)
            {
                ok=0;
                break;
            }
        if(ok)
        {
            a=m;
            break;
        }
        m--;
    }
}

int main()
{
    cout<<"n=";cin>>n;
    sub(n,a,b);
    cout<<a<<" "<<b;
    return 0;
}
