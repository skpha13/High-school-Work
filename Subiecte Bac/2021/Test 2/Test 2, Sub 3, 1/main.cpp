#include <iostream>

using namespace std;

int n,m,i,p,f,nr;

int main()
{
    cin>>n>>m;
    i=2;
    while(n>1 && m>1)
    {
        p=0;
        f=0;
        while(n%i==0)
        {
            n/=i;
            p++;
        }
        while(m%i==0)
        {
            m/=i;
            f++;
        }
        if(p==f && p!=0 && f!=0)nr++;
        i++;
    }
    cout<<nr;
    return 0;
}
