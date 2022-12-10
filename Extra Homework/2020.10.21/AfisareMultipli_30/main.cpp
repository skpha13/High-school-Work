#include <iostream>

using namespace std;

void sub(int n,int k)
{
    int v[100],p=k,i,j=0;
    for(i=1;i<=n;i++)
    {
        j++;
        v[j]=p*i;
    }
    for(i=j;i>=1;i--)
        cout<<v[i]<<" ";
}

int main()
{
    int n,k;
    cin>>n>>k;
    sub(n,k);
    return 0;
}
