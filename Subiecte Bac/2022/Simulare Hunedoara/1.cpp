#include <iostream>

using namespace std;

int n,x,y;

int prim(int n)
{
    if(n<2) return 0;
    for(int i=2;i*i<=n;i++)
        if(n%i==0) return 0;
    return 1;
}

void subprogram(int n,int &x,int &y)
{
    for(int i=1;i<=n;i++)
        if(prim(i) && prim(n-i))
        {
            x=i;
            y=n-i;
            break;
        }
}

int main()
{
	subprogram(100,x,y);
    cout<<x<<" "<<y;
    return 0;
}
