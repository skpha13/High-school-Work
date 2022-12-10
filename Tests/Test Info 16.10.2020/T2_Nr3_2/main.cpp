#include <iostream>

using namespace std;

int ordonat(int x[100],int n)
{
    int i,ok=1;
    for(i=2;i<=n;i++)
        if(x[i-1]>x[i])
            ok=0;
    if(ok)return 1;
        else
            {
                for(i=2;i<=n;i++)
                    if(x[i-1]<x[i])
                        ok=1;
                if(ok)return 0;
                    else
                        return 1;
            }
}

int main()
{
    int n,x[100],i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<"x["<<i<<"]=";
        cin>>x[i];
    }
    cout<<ordonat(x,n);
    return 0;
}
