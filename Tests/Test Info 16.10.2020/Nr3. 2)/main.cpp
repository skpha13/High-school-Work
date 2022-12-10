#include <iostream>

using namespace std;

int nr(int x[100],int n)
{
    int i,mx=-2000000000,ok=0;
    for(i=1;i<=n;i++)
        if(x[i]<0 && mx<x[i])
        {
            mx=x[i];
            ok=1;
        }
    if(ok)
        return mx;
        else
            return 0;
}

int main()
{
    int x[100],n,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<"x["<<i<<"]=";
        cin>>x[i];
    }
    cout<<nr(x,n);
    return 0;
}
