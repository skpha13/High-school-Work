#include <iostream>

using namespace std;

void cmmdc(int n,int m,int &d)
{
    int r;
    r=n%m;
    while(r)
    {
        n=m;
        m=r;
        r=n%m;
    }
    d=m;
}

int main()
{
    int n,m,d;
    cin>>n>>m;
    cmmdc(n,m,d);
    cout<<d;
    return 0;
}
