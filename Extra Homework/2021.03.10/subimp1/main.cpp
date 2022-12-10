#include <iostream>

using namespace std;

int x[20],n;

void afis(int k)
{
    int i;
    if(k%2!=0)
    {
        for(i=1;i<=k;i++)
            cout<<x[i]<<" ";
        cout<<endl;
    }
}

int valid(int k)
{
    int i;
    for(i=1;i<k;i++)
        if(k>1 && x[k]<=x[k-1])return 0;
    return 1;
}

void btk(int k)
{
    int i;
    for(i=1;i<=n;i++)
    {
        x[k]=i;
            if(valid(k))
            {
                afis(k);
                if(k<n)btk(k+1);
            }
    }
}

int main()
{
    cin>>n;
    btk(1);
    return 0;
}
