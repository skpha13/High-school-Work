#include <iostream>

using namespace std;

void cpara(int n,int &m)
{
    int p=1;
    m=0;
    while(n)
    {
        if((n%10)%2!=0)
        {
             m=n%10*p+m;
            p*=10;
        }
        n/=10;
    }
}

int main()
{
    int n,m;
    cin>>n;
    cpara(n,m);
    cout<<m;
    return 0;
}
