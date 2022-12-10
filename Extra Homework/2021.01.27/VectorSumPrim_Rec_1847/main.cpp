#include <iostream>

using namespace std;

int x[101],n,i,s;

int prim(int n)
{
    int i;
    if(n<2)return 0;
    for(i=2;i*i<=n;i++)
        if(n%i==0)return 0;
    return 1;
}

void P(int x[101],int n,int &s)
{
    if(n==0)s=0;
    else
    {
        P(x,n-1,s);
        if(prim(x[n-1]))
            s+=x[n-1];
    }
}

int main()
{
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"x["<<i<<"]=";
        cin>>x[i];
    }
    P(x,n,s);
    cout<<s;
    return 0;
}
