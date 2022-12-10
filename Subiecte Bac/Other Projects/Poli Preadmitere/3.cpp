#include <iostream>

using namespace std;

int f(int a, int b,int k)
{
    if(k==1)return a+b;
    if(a+2>b)return f(a+2,b,k-1);
    return f(1,b+2,k-1);   
}

int main()
{
    cout<<f(1,3,2022);
    return 0;
}