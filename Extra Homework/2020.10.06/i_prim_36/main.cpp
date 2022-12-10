#include <iostream>

using namespace std;

int i_prim(int n)
{
    int ok,i,k=0,x,p1,p2;
    x=n;
    while(!k)
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
            p2=n;
            k++;
        }
        n++;
    }
    k=0;
    while(!k)
    {

        ok=1;
        if(x<2)ok=0;
        for(i=2;i*i<=x;i++)
            if(x%i==0)
            {
                ok=0;
                break;
            }
        if(ok)
        {
            p1=x;
            k++;
        }
        x--;
    }
    return p2-p1;
}

int main()
{
    int n;
    cin>>n;
    cout<<i_prim(n);
    return 0;
}
