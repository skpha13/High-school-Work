#include <iostream>

using namespace std;

void sum(int n,int &s)
{
    int i;
    s=0;
    for(i=1;i<=n;i++)
        if(n%i==0)s+=i;
}

int main()
{
    int n,s;
    cin>>n;
    sum(n,s);
    cout<<s;
    return 0;
}
