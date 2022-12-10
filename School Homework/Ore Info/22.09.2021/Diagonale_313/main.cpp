#include <iostream>

using namespace std;

int a[21][21],n,i,j,s1,s2;

int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            cin>>a[i][j];
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
        {
            if(i==j)s1+=a[i][j];
            if(i+j==n+1)s2+=a[i][j];
        }
    if(s1-s2>0)
        cout<<s1-s2;
    else
        cout<<s2-s1;
    return 0;
}
