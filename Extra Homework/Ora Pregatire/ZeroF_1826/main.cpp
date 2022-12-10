#include <iostream>

using namespace std;

int zerof(int n)
{
    int s=0,p=5;
    while(p<=n)
    {
        s+=n/p;
        p*=5;
    }
    return s;
}

int main()
{
    int n;
    cin>>n;
    cout<<zerof(n);
    return 0;
}
