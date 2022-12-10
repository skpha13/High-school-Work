#include <iostream>

using namespace std;

int a[11][11],i,j;

int main()
{
    for(i=0;i<9;i++)
        for(j=0;j<9;j++)
            a[i][j]=-1;
    for(i=0;i<9;i++)
        for(j=0;j<9;j++)
            if(i==j || i+j==8)
                a[i][j]=0;
            else 
                if(i+j<8)
                {
                    a[i][j]=i+j;
                    a[8-j][8-i]=8-i-j;
                }
    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}