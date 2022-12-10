#include <iostream>

using namespace std;

int a[101],n,i;

int verificare(int a[101],int n)
{
    if(n==1)return 1;
    else
        if(a[n]<=a[n-1])
            return 0;
        else
            return verificare(a,n-1);
}

int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    //cout<<verificare(a,n);
    return 0;
}
