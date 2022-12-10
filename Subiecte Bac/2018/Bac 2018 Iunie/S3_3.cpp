#include <iostream>

using namespace std;

int n,x,y,r;

int resturi(int n,int x,int y,int r)
{
    int i,nr=0;
    for(i=1;i<=n;i++)
        if(i%x==r && i%y==r)
            nr++;
    return nr;
}

int main()
{
    cout<<resturi(200,5,14,2);
    return 0;
}