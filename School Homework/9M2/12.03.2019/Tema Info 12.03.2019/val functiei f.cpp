#include <iostream>

using namespace std;

int main()
{
    int x,f;
    cout<<"x=";cin>>x;
    if(x<5)
        f=(x*x)-3;
    if(5<=x<=25)
        f=x+1;
    if(x>25)
        f=(x*x)-(5*x)+6;
    cout<<"f="<<f;
    return 0;
}
