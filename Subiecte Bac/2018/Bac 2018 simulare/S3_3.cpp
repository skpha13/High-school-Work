#include <iostream>

using namespace std;

int n,x,y;

void radical(int n,int &x,int &y)
{
    int f=2,p,i;
    x=y=1;
    while(n>1)
    {
        p=0;
        while(n%f==0)
        {
            n/=f;
            p++;
        }
        if(p%2==0)
            for(i=1;i<=p/2;i++)
                x*=f;
        else
        {
            for(i=1;i<=(p-1)/2;i++)
                x*=f;
            y*=f;
        }
        f++;
    }
}

int main()
{
    cin>>n;
    radical(n,x,y);
    cout<<x<<" "<<y;
    return 0;
}