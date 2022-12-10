#include <iostream>

using namespace std;

void sub(int n,int &a,int &b)
{
    int ok,i,k=0,x;
    x=n;
    while(!k)
    {
        ok=1;
        n++;
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
            k++;
        }
    }
    k=0;
    while(!k)
    {

        ok=1;
        x--;
        if(x<2)ok=0;
        for(i=2;i*i<=x;i++)
            if(x%i==0)
            {
                ok=0;
                break;
            }
        if(ok)
        {
            a=x;
            k++;
        }
    }
}

int main()
{
    int n,a,b;
    cin>>n;
    sub(n,a,b);
    cout<<a<<" "<<b;
    return 0;
}
