#include <iostream>

using namespace std;

int prim(int n)
{
    if(n<2)return 0;
    for(int i=2;i*i<=n;i++)
        if(n%i==0)return 0;
    return 1;
}

int aprim(int v[100],int n)
{
    int i;
    for(i=1;i<=n;i++)
        if(prim(v[i]))
            return v[i];
    return 0;
}

int main()
{
    int n,v[100],i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<"v["<<i<<"]=";
        cin>>v[i];
    }
    cout<<aprim(v,n);
    return 0;
}
