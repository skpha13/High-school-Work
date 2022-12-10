#include <iostream>

using namespace std;

void cifra(int n,int &c)
{
    c=0;
    while(n)
    {
        if(c<n%10)
            c=n%10;
        n/=10;
    }
}

int main()
{
    int n,c;
    cin>>n;
    cifra(n,c);
    cout<<c;
    return 0;
}
