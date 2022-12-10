#include <iostream>

using namespace std;

int fact(int n)
{
    int i,s=1;
    for(i=1;i<=n;i++)
        s*=i;
    return s;
}

int main()
{
    int n,s;
    cin>>n;
    cout<<fact(n)
    return 0;
}
