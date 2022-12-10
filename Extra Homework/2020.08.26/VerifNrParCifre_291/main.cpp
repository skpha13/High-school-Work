#include <iostream>

using namespace std;

int n,a,i,b,k,p;

int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a;
        while(a>0)
        {
            a/=10;
            k++;
        }
        if(k%2==0)p++;
        k=0;
    }
    if(p==n)cout<<"DA";
        else
            cout<<"NU";
    return 0;
}
