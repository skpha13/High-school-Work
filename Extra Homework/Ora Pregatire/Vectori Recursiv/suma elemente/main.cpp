#include <iostream>

using namespace std;

int n,v[100];

void citire(int i)
{
    if(i<=n)
    {
        cin>>v[i];
        citire(i+1);
    }
}

int suma(int n)
{
    if(n==0)return 0;
    else
        return v[n]+suma(n-1);
}

int prod(int n)
{
    if(n==0)return 1;
    else
        return v[n]*prod(n-1);
}

int sumapare(int n)
{
    if(n==0)return 0;
    else
        if(v[n]%2==0)return sumapare(n-1)+v[n];
        else
            return sumapare(n-1);
}

int maxim(int n)
{
    if(n==1)return v[n];
    else
        if(v[n]>maxim(n-1))return v[n];
        else
            return maxim(n-1);
}

int main()
{
    cin>>n;
    citire(1);
    cout<<suma(n)<<endl;
    cout<<prod(n)<<endl;
    cout<<sumapare(n)<<endl;
    cout<<maxim(n);
    return 0;
}
