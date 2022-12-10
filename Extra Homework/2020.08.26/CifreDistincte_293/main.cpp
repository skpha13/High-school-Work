#include <iostream>

using namespace std;

int n,a,i,b,x,y,p;

int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a;
        x=a%10;
        a/=10;
        while(a>0)
        {
            y=a%10;
            a/=10;
            if(x==y)p++;
            x=y;
        }
    }
    if(p==0)cout<<"DA";
        else
            cout<<"NU";
    return 0;
}
