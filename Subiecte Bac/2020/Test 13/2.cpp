#include <iostream>

using namespace std;

int a[401][401],n,k,i,j,d,s,x;

int main()
{
    cin>>n>>k;
    x=i=1;
    while(i<=n*k-k+1)
    {
        for(d=i;d<=i+k;d++)
        {
            s=x;
            for(j=1;j<=n;j++)
                a[d][j]=s++;
        }
        x++;
        i+=k;
    }
    for(i=1;i<=n*k;i++)
    {
        for(j=1;j<=n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}

