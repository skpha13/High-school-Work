#include <iostream>

using namespace std;

int n,a,ok=1,i,b;

int main()
{
    cin>>n;
    cin>>b;
    for(i=2;i<=n;i++)
    {
        cin>>a;
        if(a!=b)ok=0;
    }
    if(ok)cout<<"DA";
        else
            cout<<"NU";
    return 0;
}
