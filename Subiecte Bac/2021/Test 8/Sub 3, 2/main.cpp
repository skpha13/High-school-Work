#include <iostream>

using namespace std;

int a[51][51],n,i,j,s;

int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            cin>>a[i][j];
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            if(i<j && i+j>n+1 && j!=n)
                s+=a[i][j];
    cout<<s;
    return 0;
}
