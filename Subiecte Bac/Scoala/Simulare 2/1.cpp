#include <iostream>

using namespace std;

long long int n;

long long int dublu(long long int n);

int main()
{
    cout<<dublu(999979999);
    return 0;
}

long long int dublu(long long int n)
{
    long long int m=n,p=1;
    int k=0,i;
    while(m)
    {
        k++;
        m/=10;
    }
    if(k%2==0 || k<3)return -1;
    m=0;
    i=1;
    while(n)
    {
        if(i==k/2+1)
        {
            m=n%10*p+m;
            p*=10;
        }
        m=n%10*p+m;
        p*=10;
        n/=10;
        i++;
    }
    return m;
}