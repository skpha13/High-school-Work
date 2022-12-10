#include <iostream>

using namespace std;

int prim(int n)
{
    int i;
    if(n<2)return 0;
    for(i=2;i*i<=n;i++)
        if(n%i==0)return 0;
    return 1;
}

int nrprim(int v[100],int n)
{
    int i;
    for(i=1;i<=n;i++)
        if(prim(v[i]))
            return v[i];
    return 0;
}

int main()
{
    int v[100],n,i;
    cout<<"n=";cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<"v["<<i<<"]=";
        cin>>v[i];
    }
    cout<<nrprim(v,n);
    return 0;
}
