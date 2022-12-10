#include <iostream>

using namespace std;

int i,j,a[10][10];

int main()
{
    for(j=0;j<5;j++)
        a[0][j]=5-j;
    for(i=1;i<4;i++)
    {
        a[i][0]=a[i-1][0]+5;
        for(j=1;j<5;j++)
            a[i][j]=a[i][j-1]-1;
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}