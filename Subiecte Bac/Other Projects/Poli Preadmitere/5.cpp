#include <iostream>

using namespace std;

int a=10;
int b=5;

int f(int &x,int y)
{
    int a=2;
    x+=a;
    y+=a;
    return a+x;
}

int main()
{
    cout<<f(a,b);
    cout<<" "<<a<<" "<<b;
    return 0;
}