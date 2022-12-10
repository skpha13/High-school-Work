#include <iostream>

using namespace std;

int x,y;

void frate(int x,int &y)
{
    int ok=1,m=x,c,p=1;
    y=0;
    while(m)
    {
        c=m%10;
        if(c==9) ok=0;
        y=(c+1)*p+y;
        p*=10;
        m/=10;
    }
    if(!ok) y=-1;
}

int main()
{
    cin>>x;
    frate(x,y);
    cout<<y;
    return 0;
}