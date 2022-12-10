#include <iostream>

using namespace std;

int x[21],n,m;

void afis(int k)
{
    int i;
    for(i=1;i<=k;i++)
        cout<<x[i]<<" ";
    cout<<endl;
}

int valid(int k)
{
    int i;
    for(i=1;i<k;i++)
    {
        if(k>1 && x[k]<=x[k-1])return 0;
        if(x[k]%2==0 && x[k-1]%2==0)return 0;
    }
    return 1;
}

void btk(int k)
{
    int i;
    for(i=1;i<=n;i++)
    {
        x[k]=i;
        if(valid(k))
            if(k==m)afis(k);
                else
                    btk(k+1);
    }
}

int main()
{
    cin>>n>>m;
    btk(1);
    return 0;
}
