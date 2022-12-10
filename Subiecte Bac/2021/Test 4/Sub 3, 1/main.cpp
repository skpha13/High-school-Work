#include <iostream>

using namespace std;

int n,k;

int joc(int n)
{
    int k=0,i;
    for(i=2;i<=n;i++)
        if(n%i==0)k++;
    return k;
}

int main()
{
    cin>>n;
    cout<<joc(n);
    return 0;
}
