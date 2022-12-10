#include <iostream>

using namespace std;

int s[100],n,p,x;

void f(int k)
{
    int i,j,ok;
    if(k==p+1)x++;
    else
        for(i=1;i<=n;i++)
        {
            s[k]=i;
            ok=1;
            for(j=1;j<k;j++)
                if(s[k]==s[j])
                    ok=0;
            if(ok) f(k+1);
        }
}

int main()
{
    n=4;
    p=3;
    f(1);
    cout<<x;
    return 0;
}