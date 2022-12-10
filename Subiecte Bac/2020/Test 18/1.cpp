#include <iostream>

using namespace std;

int n,s;

void suma(int n, int &s)
{
    int v[10],i;
    for(i=0;i<=9;i++)
        v[i]=0;
    while(n)
    {
        v[n%10]=1;
        n/=10;
    }
    for(i=0;i<=9;i+=2)
        if(v[i])s+=i;
}

int main()
{
    cin>>n;
    suma(n,s);
    cout<<s;
    return 0;
}