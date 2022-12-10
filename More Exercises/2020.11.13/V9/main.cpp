#include <iostream>

using namespace std;

int n,k;

void sub(int n,int k)
{
    int v[100],p=k,i,j=0;
    for(i=1;i<=n;i++)
        v[++j]=p*i;
    for(i=j;i>=1;i--)
        cout<<v[i]<<" ";
}

int main()
{
    cout<<"n=";cin>>n;
    cout<<"k=";cin>>k;
    sub(n,k);
    return 0;
}
