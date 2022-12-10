#include <iostream>

using namespace std;

int x[16],n,use[16];

void afis(int k)
{
    int i,c=1;
    for(i=1;i<=k;i++)
        if(i%2==0)cout<<i<<" ";
        else
            cout<<x[c++]<<" ";
    cout<<endl;
}

int valid(int k)
{
    int i;
    for(i=1;i<k;i++)
        if(x[k]==x[i])return 0;
    if(x[k]!=k && x[k]%2==0)return 0;
    return 1;
}

void btk(int k)
{
    int i;
    for(i=1;i<=n;i++)
        if(!use[i])
        {
            x[k]=i;
            use[i]=1;
            if(k==n)afis(k);
            else btk(k+1);
            use[i]=0;
        }
}

int main()
{
    cin>>n;
    btk(1);
    return 0;
}
