#include <iostream>

using namespace std;

int a[21][21],i,j;

int main()
{
    for(i=1;i<=7;i++)
        for(j=1;j<=7;j++)
            cin>>a[i][j];
    j=1;
    for(i=1;i<=7;i++)
        j*=a[i][i];
    for(i=7;i>=1;i--)
        {
            cout<<j<<" ";
            j/=a[i][i];
        }
    return 0;
}