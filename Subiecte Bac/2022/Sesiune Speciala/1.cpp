#include <iostream>

using namespace std;

int n,x,y;

void patrate(int n, int &x, int &y)
{
    int i,j,ok=0;
    x=y=0;
    for(i=2;i*i<=n && ok==0;i++)
        for(j=i+1;j*j<=n;j++)
            if(i*i*j*j==n)
            {
                x=i;
                y=j;
                ok=1;
                break;
            }
}

int main()
{
    cin>>n;
    patrate(n,x,y);
    cout<<x<<" "<<y;
}