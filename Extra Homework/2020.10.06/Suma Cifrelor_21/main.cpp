#include <iostream>

using namespace std;

void sum_cif(int n,int &s)
{
    s=0;
    while(n)
    {
        s+=n%10;
        n/=10;
    }
}

int main()
{
    int n,s;
    cin>>n;
    sum_cif(n,s);
    cout<<s;
    return 0;
}
