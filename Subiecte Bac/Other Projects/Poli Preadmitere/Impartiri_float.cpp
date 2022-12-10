#include <iostream>

using namespace std;

float sp(int n)
{
    if(n>1)
    {
        cout<<1./(n*(n+1))<<" ";
        return sp(n-1)+1./(n*(n+1));
    }
    else
        return 0.5;
}

int main()
{
    cout<<endl<<sp(5);
    return 0;
}