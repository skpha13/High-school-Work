#include <iostream>

using namespace std;

int v[100],n,i;

void afisvec(int v[],int n)
{
    if(n>0)
    {
        afisvec(v,n-1);
        cout<<v[n-1]<<" ";
    }
}

int main()
{
    cin>>n;
    for(i=0;i<n;i++)
        cin>>v[i];
    afisvec(v,n);
    return 0;
}
