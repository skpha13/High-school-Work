#include <iostream>

using namespace std;

int a[11][11],i,j,x,c,n,y;

int main()
{
    cin>>x;
    y=x;
    while(y)
    {
        n++;
        y/=10;
    }
    for(i=1;i<=n;i++)
    {
        c=x;
        for(j=n;j>=1;j--)
        {
            a[i][j]=c%10;
            c/=10;
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
