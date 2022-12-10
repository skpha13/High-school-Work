#include <iostream>

using namespace std;

int n,i,x[100];

int sum(int n)
{
    int s=0;
    for(i=1;i<=n;i++)
        s+=x[i];
    return s;
}

int imp(int n)
{
    int p=0;
    for(i=1;i<=n;i++)
        if(x[i]%2!=0)
            p++;
    return p;
}

int mx(int n)
{
    int mx=0;
    for(i=1;i<=n;i++)
        if(mx<x[i])mx=x[i];
    return mx;
}

int main()
{
    cout<<"n=";cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<"x["<<i<<"]=";cin>>x[i];
    }
    cout<<endl;
    cout<<sum(n)<<" "<<imp(n)<<" "<<mx(n)<<" ";
    return 0;
}
