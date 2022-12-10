#include <iostream>

using namespace std;

int n;

int maxim(int n)
{
    int c=-1;
    while(n)
    {
        if(n%2==1 && n%10>c) c=n%10;
        n/=10;
    }
    return c;
}

int main()
{
    cin>>n;
    cout<<maxim(n);
    return 0;
}