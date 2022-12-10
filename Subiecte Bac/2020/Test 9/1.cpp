#include <iostream>

using namespace std;

int n,s;

void suma(int n, int &s)
{
    int c,v[10];
    s=0;
    while(n)
    {
        c=n%10;
        if(c%2==1 && v[c]!=1)
            s+=c;
        v[c]=1;
        n/=10;
    }
}

int main()
{
    cin>>n;
    suma(n,s);
    cout<<s;
    return 0;
}