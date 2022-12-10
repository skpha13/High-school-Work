#include <iostream>

using namespace std;

int n;

int CifrePrime(int n)
{
    int s=0,c;
    while(n)
    {
        c=n%10;
        if(c==2 || c==3 || c==5 || c==7) s+=c;
        n/=10;
    }
    return s;
}

int main()
{
    cout<<CifrePrime(140);
}