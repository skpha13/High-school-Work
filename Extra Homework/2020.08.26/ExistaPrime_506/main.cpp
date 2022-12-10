#include <iostream>

using namespace std;

int n,a,ok=1,i,p,j;

int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a;
        ok=1;
        if(a<2)ok=0;
        for(j=2;j<=a/2;j++)
            if(a%j==0)
            {
                ok=0;
                break;
            }
        if(ok)
            p++;
    }
    if(p)cout<<"DA";
        else
            cout<<"NU";
    return 0;
}
