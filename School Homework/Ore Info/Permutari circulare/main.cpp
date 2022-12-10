#include <iostream>

using namespace std;

void shift(int n,int x[101])
{
    int i;
    for(i=1;i<n;i++)
        swap(x[i],x[i+1]);
}

int main()
{
    int n,x[101],i,k;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<"x["<<i<<"]=";
        cin>>x[i];
    }
    k=n;
    for(i=1;i<n;i++)
    {
        shift(k,x);
        k--;
    }
    for(i=1;i<=n;i++)
        cout<<x[i]<<" ";
    return 0;
}
