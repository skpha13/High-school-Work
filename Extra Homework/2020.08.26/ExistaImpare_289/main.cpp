#include <iostream>

using namespace std;

int n,a,ok,i;

int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a;
        if(a%2!=0)ok=1;
    }
    if(ok)cout<<"DA";
        else
            cout<<"NU";
    return 0;
}
