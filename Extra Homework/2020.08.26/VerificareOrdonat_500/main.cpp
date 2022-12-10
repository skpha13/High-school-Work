#include <iostream>

using namespace std;

int n,a,ok=1,i,b,j;

int main()
{
    cin>>n;
    cin>>a;
    for(i=2;i<=n;i++)
    {
        cin>>b;
        if(a>b && a%2==0 && b%2==0)ok=0;
        a=b;
    }
    if(ok)cout<<"DA";
        else
            cout<<"NU";
    return 0;
}
