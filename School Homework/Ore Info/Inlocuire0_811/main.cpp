#include <iostream>

using namespace std;

void num(int n,int v[100])
{
    int i,x;
    x=v[0];
    for(i=0;i<n;i++)
        if(v[i]<=x)
            v[i]=0;
}

int main()
{
    int n,v[100],i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"v["<<i<<"]=";
        cin>>v[i];
    }
    num(n,v);
    for(i=0;i<n;i++)
        cout<<v[i]<<" ";
    return 0;
}
