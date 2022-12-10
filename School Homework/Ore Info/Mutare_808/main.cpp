#include <iostream>

using namespace std;

void sub(int n,int v[100],int x)
{
    int i,k=0;
    for(i=0;i<n;i++)
        if(v[i]==x)
            for(k=0;k<=i;k++)
                swap(v[k],v[i]);
}

int main()
{
    int n,v[100],x,i;
    cin>>n>>x;
    for(i=0;i<n;i++)
    {
        cout<<"v["<<i<<"]=";
        cin>>v[i];
    }
    sub(n,v,x);
    for(i=0;i<n;i++)
        cout<<v[i]<<" ";
    return 0;
}
