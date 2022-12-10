#include <iostream>

using namespace std;

int a[20][20],n,m,i,j;

int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
        {
            cout<<"a["<<i<<"]["<<j<<"]=";
            cin>>a[i][j];
        }
    cout<<endl;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            if(i!=j)
                cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
