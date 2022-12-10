#include <iostream>

using namespace std;

int concat(int a,int b)
{
    int x;
    x=b;
    while(x)
    {
        a*=10;
        x/=10;
    }
    a+=b;
    return a;
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<concat(a,b);
    return 0;
}
