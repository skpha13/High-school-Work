#include <iostream>

using namespace std;

int n,x,y,z,a,i;

int main()
{
    cin>>n;
    cin>>a;
    x=y=z=a;
    i=2;
    while(i<=n)
    {
        cin>>a;
        if(x>a)
        {
            z=y;
            y=x;
            x=a;
        }
        else
            if(y>a)
            {
                z=y;
                y=a;
            }
        i++;
    }
    cout<<z<<" "<<y<<" "<<x;
    return 0;
}
