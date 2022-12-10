#include <iostream>

using namespace std;

int n,x,y,a,i;

int main()
{
    cin>>n;
    cin>>a;
    x=y=a;
    i=2;
    while(i<=n)
    {
        cin>>a;
        if(x<a)
        {
            y=x;
            x=a;
        }
        else
            if(y<a)y=a;
        i++;
    }
    cout<<x<<" "<<y;
    return 0;
}
