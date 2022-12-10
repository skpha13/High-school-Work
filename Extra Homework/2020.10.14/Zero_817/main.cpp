#include <iostream>

using namespace std;

void zero(int n,int v[])
{
    int i=1,j=2;
    while(i<=n*2 && j<=n*2)
        if(v[i]%2==0)
            {
                swap(v[i],v[j]);
                j+=2;
            }
            else
                i+=2;
}

int main()
{
    int n,i,v[102];
    cin>>n;
    for(i=1;i<=n*2;i++)
    {
        cout<<"v["<<i<<"]=";
        cin>>v[i];
    }
    zero(n,v);
    for(i=1;i<=n*2;i++)
        cout<<v[i]<<" ";
    return 0;
}
