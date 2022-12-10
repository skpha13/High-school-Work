#include <iostream>

using namespace std;

int a[4][5],i,j;

int main()
{
    cout<<a[4][4];
    for(i=3;i>=0;i--)
    {
        a[i][0]=a[i+1][4]+1;
        for(j=1;j<5;j++)
            a[i][j]=a[i][j-1]+1;
    }
    cout<<endl;
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
