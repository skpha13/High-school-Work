#include <iostream>

using namespace std;

int DivImpar(int a,int b)
{
    int r;
    while(b!=0)
    {
        r=a%b;
        a=b;
        b=r;
    }
    while(a%2==0)a/=2;
    return a;
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<DivImpar(a,b);
    return 0;
}
