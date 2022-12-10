#include <iostream>

using namespace std;

void cpara(int n,int &c)
{
    c=0;
    while(n)
    {
        if(n%10>c && (n%10)%2==0)
            c=n%10;
        n/=10;
    }
}

int main()
{
    int n,c;
    cin>>n;
    cpara(n,c);
    cout<<c;
    return 0;
}
