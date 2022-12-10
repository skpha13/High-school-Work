#include <iostream>

using namespace std;

void detcifre(int n,int &p,int &u)
{
    if(!n)p=u=0;
    u=n%10;
    while(n)
    {
        p=n%10;
        n/=10;
    }
}

int main()
{
    int n,p,u;
    cin>>n;
    detcifre(n,p,u);
    cout<<p<<" "<<u;
    return 0;
}
