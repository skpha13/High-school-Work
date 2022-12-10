#include <iostream>

using namespace std;

void Impare(int &n)
{
    int x,c,p=1;
    x=n;
    n=0;
    while(x)
    {
        c=x%10;
        x/=10;
        if(c%2!=0)
            c--;
        n=n+c*p;
        p*=10;
    }
}

int main()
{
    int n;
    cin>>n;
    Impare(n);
    cout<<n;
    return 0;
}
