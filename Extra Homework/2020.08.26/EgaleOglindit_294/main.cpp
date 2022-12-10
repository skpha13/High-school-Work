#include <iostream>
#include <fstream>

using namespace std;

int n,a,b,ogl,ok,i;

int main()
{
    cin>>n>>a;
    while(a>0)
    {
        ogl=ogl*10 + a%10;
        a/=10;
    }
    for(i=2;i<=n;i++)
    {
        cin>>b;
        if(ogl==b)ok=1;
    }
    if(ok)cout<<"DA";
        else
            cout<<"NU";

    return 0;
}
