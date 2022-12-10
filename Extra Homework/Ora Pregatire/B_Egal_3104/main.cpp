#include <iostream>

using namespace std;

int n;

int Egal(int n)
{
    int c,m=0;
    while(n)
    {
        c=n%10;
        if(c%2!=0)
            m=m*10+c;
        n/=10;
    }
    c=m%10;
    m/=10;
    while(m)
    {
        if(m%10!=c)
            return 0;
        m/=10;
    }
    return 1;
}

int main()
{
    cin>>n;
    cout<<Egal(n);
    return 0;
}
