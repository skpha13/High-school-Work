#include <iostream>

using namespace std;

void sum_div_prim(int n,int &s)
{
    int i,j,ok;
    s=0;
    for(i=1;i*i<=n;i++)
        if(n%i==0)
        {
            ok=1;
            if(i<2)ok=0;
            for(j=2;j*j<=i;j++)
                if(i%j==0)
                {
                    ok=0;
                    break;
                }
            if(ok)
                s+=i;
        }
    ok=1;
    if(n<2)ok=0;
    for(j=2;j*j<=n;j++)
        if(n%j==0)
        {
            ok=0;
            break;
        }
    if(ok)
        s+=n;
}

int main()
{
    int n,s;
    cin>>n;
    sum_div_prim(n,s);
    cout<<s;
    return 0;
}
