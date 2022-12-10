#include <iostream>

using namespace std;

int n,a,x,y,i;

int main()
{
    cin>>n;
    cin>>a;
    y=a;
    for(i=2;i<=n;i++)
    {
        cin>>a;
        if(i%2==0 && x<=a)
            x=a;
        if(i%2!=0 && y<=9)
            y=a;
        if(i%2!=0 && a>=10 && y>=a)
            y=a;

    }
    if(y<=9)y=-1;
    cout<<x<<" "<<y;
    return 0;
}
