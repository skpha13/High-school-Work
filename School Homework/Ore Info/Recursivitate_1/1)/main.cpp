#include <iostream>

using namespace std;

int suma(int n)
{
    if(!n)return 0;
    else
        return n%10+suma(n/10);
}

int main()
{
    int n;
    cin>>n;
    cout<<suma(n);
    return 0;
}
