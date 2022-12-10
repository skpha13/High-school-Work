#include <iostream>

using namespace std;

int a[21][21],i,j;

int main()
{
    for(i=0;i<7;i++)
        for(j=0;j<7;j++)
        {
            if(i<j && i+j<6) a[i][j]='a';
            if(i>j && i+j>6) a[i][j]='a';
            if(i>=j && i+j<=6) a[i][j]='b';
            if(i<=j && i+j>=6) a[i][j]='b';
        }
    for(i=0;i<7;i++)
    {
        for(j=0;j<7;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}