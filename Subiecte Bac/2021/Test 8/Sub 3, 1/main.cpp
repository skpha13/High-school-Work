#include <iostream>

using namespace std;

int n,m;

void nrfp(int n, int &m)
{
    int i,nr=0,f,x,y,mx=0;
    for(i=2;i<=n;i++)
    {
        f=2;
        x=i;
        nr=0;
        while(x>1)
        {
            if(x%f==0)
            {
                nr++;
                while(x%f==0)x=x/f;
            }
            f++;
        }
        if(mx<=nr)
        {
            mx=nr;
            m=i;
        }
    }
}

int main()
{
    cin>>n;
    nrfp(n,m);
    cout<<m;
    return 0;
}
