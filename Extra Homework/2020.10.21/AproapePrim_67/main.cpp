#include <iostream>

using namespace std;

int prim(int n)
{
    if(n<2)return 0;
    for(int i=2;i*i<=n;i++)
        if(n%i==0)return 0;
    return 1;
}

int a_prim(int n)
{
    int d=2;
    while(n%d!=0 && d*d<n)
        d++;
    if(n%d!=0)
        return 0;
    if(prim(n/d)==1 && d!=n/d)
        return 1;
        else
            return 0;
}

int main()
{
    int n;
    cin>>n;
    cout<<a_prim(n);
    return 0;
}
