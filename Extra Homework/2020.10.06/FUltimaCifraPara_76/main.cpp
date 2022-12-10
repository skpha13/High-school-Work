#include <iostream>

using namespace std;

int UCP(int n)
{
    int c;
    if(n==0)return 0;
    while(n)
    {
        c=n%10;
        n/=10;
        if(c%2==0)
            return c;
    }
    return -1;
}

int main()
{
    int n;
    cin>>n;
    cout<<UCP(n);
    return 0;
}
